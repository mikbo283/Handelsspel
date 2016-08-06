
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
	Person owner_;
	string name_;
	unsigned speed_;
	unsigned carry_capacity_;
	unsigned durability_;
	unsigned crew_;

public:

	Ship (const Person& owner,
	      const std::string& name,
	      const unsigned& speed,
	      const unsigned& carry_capacity,
	      const unsigned& durability,
	      const unsigned& crew); 

	void set_name(const string&);
	
	void set_speed(const unsigned&);

	void set_carry_capacity(const unsigned&);

	void set_durability(const unsigned&);

	void set_crew(const unsigned&);

	string get_name();

	unsigned get_speed();

	unsigned get_carry_capacity();

	unsigned get_durability();

	unsigned get_crew();

};

#endif
