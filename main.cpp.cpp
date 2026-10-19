#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "=== My First C++ Project ===" << endl;
    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Enter your age: ";
    cin >> age;

    cout << "\nHello " << name << "! " << endl;
    cout << "You are " << age << " years old." << endl;
    cout << "Thanks for running my first project!" << endl;
    
    return 0;
}