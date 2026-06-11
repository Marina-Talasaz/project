#ifndef DRINK_H
#define DRINK_H

#include <string>
using std::string;

#include "menuitem.h"

class Drink: public MenuItem{
	private:
		double volume;
	public:
		Drink(string,string,string,double); //gets id,name,info ,price
		virtual double calculatePrice() const;
		double getVolume()const;
		void setVolume(double);
};
#endif
