#include "item.h"


Item::Item(const unsigned& weight , const unsigned& price):
	weight_{weight},
	price_{price}
	{}

unsigned Item::get_price() {
	return price_;
}

unsigned Item::get_weight() {
	return weight_;
}

void Item::set_price(const unsigned& price) {
	price_ = price;
}

void Item::set_weight(const unsigned& weight) {
	weight_ = weight;
}

