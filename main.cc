
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>


using namespace std;


//-------------------------------------------------
class Nation {
public:
	virtual void sing_anthem() = 0;

};

//-------------------------------------------------

class Denmark : public Nation  {
public:
	 virtual void sing_anthem ()  override {
		std::cout << "Wienerbroed me chockolade pae ...." << std::endl;
	}

};




class Sweden : public Nation {
public:
	 virtual void sing_anthem ()  override{
		std::cout << "Du gamla du fria du fjällhöga nord" << std::endl;
	}

};



//-------------------------------------------------

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

//-------------------------------------------------





//------------------------------------------------

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

//------------------------------------------------

class Item {

private:
	unsigned weight;
	unsigned price;

public:
	Item() {
		weight = 0;
		price = 0;
	}



	unsigned get_price() {
		return price;
	}

	void set_price(const unsigned new_price) {
		price = new_price;
	}

};

//-------------------------------------------------

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



//-------------------------------------------------



int main() 
{

	for(auto nation : nations ) {
		nation->sing_anthem();

	}


	return 0;
}

