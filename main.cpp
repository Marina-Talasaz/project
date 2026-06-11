#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;
#include <vector>
using std::vector;

#include "food.h"
#include "drink.h"
#include "costumer.h"
#include "manager.h"
#include "systemmanager.h"
#include "address.h"
#include "restaurant.h"

int main(){
	vector <Restaurant> restaurants(100); 
	
	//Addresses
	Address a1("Mashhad","Ahmadabad 13",20);
	Address a2("Mashhad","Koohsangi 34",47);
	Address a3("Mashhad","Hashemieh 7",22);
	Address a4("Mashhad","Moalem 12",57);
	Address a5("Mashhad","Kosar 29",13);
	Address a6("Mashhad","Janbaz 10",8);
	
	
	//items:
	//gheymat ha marboot be koochektarin size az har kodam hastand
	Food pepperoni("1234","pepperoni pizza","high quality dough,pepperoni,mozzarella,pizza sause",40.5,15);
	Food supreme("1121","supreme pizza","high quality dough, mozzarella,bacon,beef,onion,pepperoni,mushroom,olives,pizza sause ",70.0,20);
	Food margherita("6522","margherita pizza","high quality dough,mozzarella,basil,olive oil,pizza sause ",30.5,15);
	Food cheeseburger("2908","cheeseburger","beef patty,cheese,lettuce,tomato,onion,pickles,mustard, bun",65.5,20);
	Food chickenburger("6677","chicken burger","fried chicken,lettuce,tomato,mayonnaise, bun",50.0,15);
	Food fries("7007","fries","fries,special spice,hot sause ",20.0,10);
	Drink water("0999","water","comes in 2 sizes: 0.5 litres and 1.5 litres",9.9);
	Drink coke("0232","coca cola","comes in 2 sizes: 0.5 litres and 1.5 litres",13.5);
	Drink doogh("0131","abali doogh","comes in 2 sizes: 0.5 litres and 1.5 litres",11.0);
	vector <MenuItem> menu1={pepperoni,supreme,margherita,cheeseburger,chickenburger,fries,water,coke,doogh};
	
	Food koobideh("3333","koobideh kabab","ground beef and lamb,onion,saffron rice",85.3,30);
	Food joojeh("8907","joojeh kabab","chicken ,lemon juice,olive oil, saffron rice",100.0,30);
	Food barg("5674","barg kabab","thin slices of beef, saffron,butter,saffron rice and green vegetables",90.0,30);
	vector <MenuItem> menu2={koobideh, joojeh, barg, water, coke, doogh};
	
	Food taco("7617","beef taco","seasoned ground beef,lettuce,tomato,cheese,salsa",50.0,20);
	Food burrito("2222","chicken burrito","chicken, rice, black beans, cheese, guacamole",39.9,20);
	Food fajita("4367","beef fajita","sliced beef,peppers,onions,tortillas,guacamole",45.5,20);
	Drink limeade("0110","limeade","comes in 2 sizes: 0.5 litres and 1.5 litres",15.0);
	vector <MenuItem> menu3={taco,burrito,fajita,limeade,water,coke};
	
	Food hotdog("8723","hot dog","hot dog,cheese,lettuce,pickles,mustard,bun",45.9,20);
	Food chicken("9430","chicken wings","crispy chicken wings,BBQ sause",40.5,15);
	vector <MenuItem> menu4={pepperoni,supreme,hotdog,chicken,cheeseburger,fries,water,coke,doogh};
	
	Food egg("8888","egg and bacon","fried eggs, bacon, black pepper",35.9,10);
	Food omelette("8186","eggs,cheddar cheese, tomatoes,onions",29.9,10);
	Food pancakes("1209","pancakes","pancakes, maple syrup, butter, strawberries",30.0,15);
	Drink coffee("0777","coffee","comes in 2 sizes: 0.5 litres and 1.5 litres",18.0);
	Drink tea("0711","tea","comes in 2 sizes: 0.5 litres and 1.5 litres",15.0);
	vector <MenuItem> menu5={egg,omelette,pancakes,coffee,tea,water};
	
	Food shrimp("5845","shrimp nigiri","cooked shrimp over sushi rice",125.5,20);
	Food rainbowroll("6721","rainbow roll","crab,avocad,cucumber topped with assorted fish",110.5,20);
	Food cucumberroll("9999","cucumber roll","cucumber, sushi rice, seaweed",117.0,20);
	vector <MenuItem> menu5={shrimp,rainbowroll,cucumberroll,water,limeade,coke};
	
	//Restaurants:
	restaurants[0]=Restaurant(11386,"Marina's",a1,true,"38888888","fast food , open 11-22",menu1);
	restaurants[1]=Restaurant(12345,"Hot kabab",a2,true,"34567890","kababi , open 12-16 & 20-23",menu2);
	restaurants[2]=Restaurant(65456,"La mejor",a3,true,"31234567","mexican food , open 13-23",menu3);
	restaurants[3]=Restaurant(20987,"Delicious",a4,true,"38000222","fast food , open 10-15 & 19-23",menu4);
	restaurants[4]=Restaurant(22222,"Beautiful morning",a5,true,"34567777","breakfast , open 7-11",menu5);
	restaurants[5]=Restaurant(31345,"Autousa's",a6,true,"33098765","sushi place , open 11-20",menu6);
	
	
	string nn;
	string role;
	cout<<"Please enter your name:\n";
	cin>>nn;
	cout<<"Choose your role:(Enter 1 for costumer, 2 for restaurant manager, 3 for system manager)\n";
	cin>>role;
	while(role!="1" && role!="2" && role!="3"){
		cout<<"Enter again:\n";
		cin>>role;
	}
	
	switch (role){
		case "1":
			Costumer c1(nn);
			c1.costumerMainPage(restaurants);
		case "2":
			Manager m1(nn);
		case "3":
			SystemManager s1(nn);
			
	}
}

