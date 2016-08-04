#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

#ifndef ITEM_H
#define ITEM_H

using namespace std;

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


#endif
