#include<iostream>
#include "./../includs/Window.h"
#include "Printer.h"
using namespace ::std;



int main() {
    setlocale(0, "ru");
    Window win;
    Item item6("cmd", "��� ������ cmd", "cmd.exe");
    Item item5("flipper zero", "��� ������ cmd", "cmd.exe");
    Item item4("tshark", "��� ������ cmd", "cmd.exe");
    Item item3("vendeta", "��� ������ cmd", "cmd.exe");
    win.addItem(item3);
    win.addItem(item4);
    win.addItem(item5);
    win.addItem(item6);
    Printer::DrawToDisplay(win);
    

    

    return 0;
}


