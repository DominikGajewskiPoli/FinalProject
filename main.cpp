#include <iostream>
#include "task_manager.h"
#include "car_registry.h"

using namespace std;

int main() {
    int choice;
    do {
        cout << "\n=== Main Menu ===\n";
        cout << "1. Task Manager\n2. Car Registry\n0. EXIT\nChoose: ";
        cin >> choice;
        switch (choice) {
            case 1: taskManager(); break;
            case 2: carRegistry(); break;
        }
    } while (choice != 0);
    return 0;
}
