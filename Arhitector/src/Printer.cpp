#pragma once
#include "Printer.h"
#include <iostream>
using std::cout;
using std::endl;
void Printer::DrawToDisplay(Window win)
{
	cout << "Current item: " << win.getCurrentItem().getName() << endl;

	for (int i(1); i < win.getItems().size()+1 ; i++) {
		cout << "item{" << i << "} " << win.getItems()[i-1].getName() << endl;
	}
}
