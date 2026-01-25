#include <iostream>
using namespace std;

class Employee {
    string name;
    double salary;
    static double bonusRate; // common for all employees

public:
    Employee(string n, double s) {
        name = n;
        salary = s;
    }

    static void setBonusRate(double rate) {
        bonusRate = rate;
    }

    double getBonus() {
        return salary * bonusRate;
    }

    void display() {
        cout << "Name: " << name 
             << ", Salary: " << salary 
             << ", Bonus: " << getBonus() << endl;
    }
};

// define static member
double Employee::bonusRate = 0.05;

int main() {
   // Employee::setBonusRate(0.10); // same bonus for all employees

    Employee e1("Alice", 50000);
    Employee e2("Bob", 60000);

    e1.display();
    e2.display();

    return 0;
}
