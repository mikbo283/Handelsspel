#include "ship.h"
#include "person.h"


Ship::Ship(const Person& owner,
	   const std::string& name,
	   const unsigned& speed,
	   const unsigned& carry_capacity,
	   const unsigned& durability,
	   const unsigned& crew) :
	owner_ {owner}  ,
	name_{name} ,
	speed_{speed} ,
	carry_capacity_{carry_capacity},
	durability_{durability},
	crew_{crew}
{}

void Ship::set_name(const std::string& name) {
	name_ = name;
}

void Ship::set_speed(const unsigned& speed) {
	speed_ = speed;
}

void Ship::set_carry_capacity(const unsigned& carry_capacity) {
	carry_capacity_ = carry_capacity;
}

void Ship::set_durability (const unsigned& durability) {
	durability_ = durability;
}

void Ship::set_crew(const unsigned& crew) {
	crew_ = crew;
}

std::string Ship::get_name() {
	return name_;
}

unsigned Ship::get_speed() {
	return speed_;
}

unsigned Ship::get_carry_capacity() {
	return carry_capacity_;
}

unsigned Ship::get_durability() {
	return durability_;
}

unsigned Ship::get_crew() {
	return crew_;
}
