#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using std::string;

#ifndef PERSON_H
#define PERSON_H


class Person {
private:
	int ducats_; 
	std::string name_;

public:

	Person(const int& ducats , const std::string& name);
	
	void set_ducats(const int &new_ducats);

	int get_ducats();
	
	void set_name(const string &name);	

	std::string get_name();
	
};

#endif
