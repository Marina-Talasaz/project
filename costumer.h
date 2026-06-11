#ifndef COSTUMER_H
#define COSTUMER_H

#include <string>
using std::string;
#include <vector>
using std::vector;

#include "user.h"
#include "menuitem.h"
#include "restaurant.h"

class Costumer: public User{
	private:
		double total; //majmoo gheymat
		vector <MenuItem> cart; //sabade kharid
		vector <int> cartStatus; //motenazer ba har item dar sabade kharid
		vector <MenuItem> history;
		
	public:
		Costumer(string);
		void addToCart(MenuItem &);
		void deleteFromCart(MenuItem &);
		void costumerMainPage(vector <Restaurant>);
		
};
#endif
