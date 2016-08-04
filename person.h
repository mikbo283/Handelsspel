#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using std::string;

#ifndef PERSON_H
#define PERSON_H


class Person {
private:
	int ducats; 
	string name;

public:
  
	void set_ducats(const int &new_ducats) {
		this->ducats = ducats;
	}

	int get_ducats() {
		return ducats;
	}
	
	void set_name(const string &name) {
		this->name = name;
	}
	
	
	
};

#endif
