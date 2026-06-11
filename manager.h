#ifndef MANAGER_H
#define MANAGER_H

#include <string>
using std::string;

#include "user.h"
#include "menuitem.h"
#include "restaurant.h"

class manager: public User{
	private:
		Restaurant res; //manager modire in restaurant ast
		
	public:
		manager(string,Restaurant &);
		void editInfo();
		void update();
		void showOrders()const;
		void addItem(MenuItem &); //baed bayad in ha ro az tooye restooran ba komake tavabe restooran virayesh kone
		void deleteItem(MenuItem &);
		void editItem();
		
	
};
#endif
