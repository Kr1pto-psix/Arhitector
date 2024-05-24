#include<iostream>
#include "../includs/Progrmas.h"
#include "Menu.h"
#include <list>
#include<assert.h>
#include <functional>
#include<Windows.h>
using namespace ::std;

class Event {
public:
    void addListener(std::function<void()   > callback) {
        listeners.push_back(callback);
    }

    void fire() {
        for (auto listener : listeners) {
            listener();
        }
    }

private:
    std::vector<std::function<void()>> listeners;
};

void myFunction() {
    std::cout << "ok button press" << endl;
}

int main() {
    setlocale(0, "ru");
    Event event;
    event.addListener(myFunction);
    while (true) {
        if (GetAsyncKeyState(VK_CONTROL)) {
            event.fire();
        }
    }
    
    

    

    return 0;
}


