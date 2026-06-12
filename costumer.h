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
		vector <double> cartPrice; //motenazer ba har item dar sabade kharid
		vector <MenuItem> history;
		
	public:
		Costumer(string);
		vector <MenuItem> getCart()const;
		double getTotal()const;
		void addToCart(MenuItem &, double);
		void deleteFromCart(int);
		void costumerMainPage(vector <Restaurant>);
		void showCart()const;
		void pay()const;
		
};
#endif
