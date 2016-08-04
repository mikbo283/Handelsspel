#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

#include "nation.h"

#ifndef SUBNATION_H
#define SUBNATION_H
 
using namespace std;;

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

#endif
