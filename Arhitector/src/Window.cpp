#include "./../includs/Window.h"

Item Window::getCurrentItem() {
	return this->currentItem;
}
void Window::setCurrentItem(Item item) {
	this->currentItem = item;
}
void Window::DrawToConsole() {
	std::cout << "CurrentItem:" <<  currentItem.ToString() << std::endl;
	std::cout << "-----------------------------------------------------------" << std::endl;
	for (int i(0); i < 2;i++) {
		std::cout << "[" << i << "]" << " item: " << this->items[i].ToString() << std::endl;
	}

}

