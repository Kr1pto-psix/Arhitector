#include "./../includs/Window.h"

Item Window::getCurrentItem() {
	return this->currentItem;
}

vector<Item> Window::getItems()
{
	return this->items;
}

void Window::addItem(Item item)
{
	this->items.push_back(item);
}

void Window::setCurrentItem(Item item)
{
	this->currentItem = item;
}
