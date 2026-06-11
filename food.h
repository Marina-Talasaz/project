#ifndef FOOD_H
#define FOOD_H

#include <string>
using std::string;

#include "menuitem.h"

class Food: public MenuItem{
	private:
		int time; //modate pokht
		int size;
		int extraSause; //tedade sos ya dorchin ezafe
	public:
		Food(string,string,string,double,int); //gets id,name,info ,primary price,time
		virtual double calculatePrice() const;
		double getTime()const;
		int getSize()const;
		void setTime(double);
		void setSize(int);
};
#endif
