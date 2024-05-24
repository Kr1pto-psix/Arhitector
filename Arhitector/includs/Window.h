#pragma once
#include "item.h"
#include <iostream>
class Window
{
private:
	
		Item *items;
		Item currentItem;



public: 
	Item getCurrentItem();
	void setCurrentItem(Item item);
	void DrawToConsole();

	
	Window(Item * items)
	{
		this->items = items;
	}

};

