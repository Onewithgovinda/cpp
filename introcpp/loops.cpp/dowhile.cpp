#include <iostream>

int main() {
    int choice;
    do {
        std::cout << "Select an option:\n";
        std::cout << "1. Start\n2. Settings\n3. Exit\n";
        std::cin >> choice;

        switch(choice) {
            case 1: std::cout << "Starting...\n"; break;
            case 2: std::cout << "Settings...\n"; break;
            case 3: std::cout << "Exiting...\n"; break;
            default: std::cout << "Invalid choice!\n";
        }
    } while (choice != 3);
    return 0;
}