#include "harbour.h"

Harbour::Harbour() {
	this -> ducats = rand() % 10000;
}


void  Harbour::set_ducats(const unsigned& ducats) {
	this -> ducats = ducats;
}

int Harbour::get_ducats() {
	return ducats;
}

