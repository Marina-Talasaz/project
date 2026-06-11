#ifndef SYSTEMMANAGER_H
#define SYSTEMMANAGER_H

#include <string>
using std::string;
#include <vector>
using std::vector;

#include "user.h"
#include "menuitem.h"
#include "restaurant.h"

class SystemManager: public User{
	private:
		vector <Restaurant> all;
		
	public:
		SystemManager(string);
		void addRestaurant(Restaurant &);
		void deleteRestaurant(Restaurant &);
		void changeStatus();
		void showInfo() const;
};
#endif
