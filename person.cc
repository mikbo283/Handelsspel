#include "person.h"


Person::Person(const int& ducats,const std::string& name) : name_{name} , ducats_{ducats} {}

void Person::set_ducats(const int &ducats) {
	ducats_ = ducats ;
}

int Person::get_ducats() {
	return ducats_;
}
	
void Person::set_name(const string &name) {
	name_ = name;
}

std::string Person::get_name() {
	return name_;
}
