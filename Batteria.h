#pragma once
#include <string>
using namespace std;
class batteria
{
private:

	int capacita_carica = 0;
	int livello_carica = 0;

public:

	//costruttore non parametrico
	batteria() {};

	//costruttore parametrico
	batteria(int capacita_carica, int livello_carica);

	//metodo per ritornare la capacita_carica
	int get_capacita_carica();

	//metodo per ritornare il livello_carica
	int get_livello_carica();

	//metodo stringa per ritornare i valori finali
	string toString();
};
