#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

#ifndef ITEM_H
#define ITEM_H

using namespace std;

class Item {

private:
	unsigned weight_;
	unsigned price_;

public:
	Item(const unsigned& weight , const unsigned& price);

	unsigned get_price();

	unsigned get_weight();

	void set_weight(const unsigned&);

	void set_price(const unsigned&);

};


#endif
