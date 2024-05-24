#pragma once
#include "item.h"
#include <iostream>
#include <vector>
using std::vector;
class Window
{
private:
		vector<Item> items;
		Item currentItem;



public: 
	Item getCurrentItem();
	vector<Item> getItems();
	void addItem(Item item);
	void setCurrentItem(Item item);



};

