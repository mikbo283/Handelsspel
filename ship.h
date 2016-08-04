
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

#include "person.h"


#ifndef SHIP_H
#define SHIP_H

using std::string;

class Ship {

private:
Person owner;
string name;
	unsigned speed;
	unsigned carry_capacity;
	unsigned durability;
	unsigned crew;

public:

	Ship() {
		name = "Flying Duchman";
		speed = 0;
		carry_capacity = 0;
		durability = 100;
		crew = 0;
	}

	void set_name(const string& new_name) {
		name = new_name;
	}

	void set_speed(const unsigned& new_speed) {
		speed = new_speed;
	} 

	void set_carry_capacity(const unsigned& new_carry_capacity) {
		carry_capacity = new_carry_capacity;
	} 

void set_durability(const unsigned& new_durbility) {
durability = new_durbility;
} 

void set_crew(const unsigned& new_crew) {
crew = new_crew;
} 



string get_name() {
return name;
}


unsigned get_speed() {
return speed;
}


unsigned get_carry_capacity() {
return carry_capacity;
}


unsigned get_durability() {
return durability;
}

unsigned get_crew() {
return crew;
}

};

#endif
