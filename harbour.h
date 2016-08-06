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
	Harbour();

	void set_ducats(const unsigned& ducats);

	int get_ducats();
};

#endif
