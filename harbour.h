#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

#include "nation.h"

#ifndef HARBOUR_H
#define HARBOUR_H

using namespace std;

class Harbour {

private:
	int ducats;

public:
	Harbour() {
		ducats =  rand() % 10000;
	}

	void set_ducats(const unsigned new_ducats) {
		ducats = new_ducats;
	} 

	int get_ducats() {
		return ducats;
	}
};

#endif
