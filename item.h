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

	virtual unsigned get_price() = 0;

	virtual unsigned get_weight() = 0;

	virtual void set_weight(const unsigned&) = 0;

	virtual void set_price(const unsigned&) = 0;

};


#endif
