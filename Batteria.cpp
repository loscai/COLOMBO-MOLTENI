#include "batteria.h"
batteria::batteria(int capacita_carica, int livello_carica)
{
	this->capacita_carica = capacita_carica;
	this->livello_carica = livello_carica;
}

int batteria::get_capacita_carica()
{
	return capacita_carica;
}

int batteria::get_livello_carica()
{
	return livello_carica;
}

string batteria::toString()
{
	string s = "";

	s += "capacita di carica -> " + to_string(get_capacita_carica()) + "\r\n";
	s += "livello di carica -> " + to_string(get_livello_carica()) + "\r\n";

	return s;
}
