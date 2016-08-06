#include "harbour.h"

Harbour::Harbour() {
	ducats_ = rand() % 10000;
}


void  Harbour::set_ducats(const unsigned& ducats) {
        ducats_  = ducats;
}

int Harbour::get_ducats() {
	return ducats_;
}

