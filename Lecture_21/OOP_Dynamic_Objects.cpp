#include <iostream>
using namespace std; 

class customer {
    public :
        string name;
        int age;
        char gender;
        double credits;

        customer(string n, int a, char g, double c) {
            cout << "\nI am inside the Parameterised constructor of the customer class\n";
            name = n;
            age = a;
            gender = g;
            credits = c;
        }

        customer() {
            cout << "\nI am inside the Default constructor of the customer class\n";
        }

        void print() {
            cout << "name = " << name << endl;
            cout << "age = " << age << endl;
            cout << "gender = " << gender << endl;
            cout << "credits = " << credits << endl << endl; 
        }
};


int main() {

    customer* cptr1 = new customer;

    cin >> cptr1->name;
    cin >> cptr1->age;
    cin >> cptr1->gender;
    cin >> cptr1->credits;

    cptr1->print();

    customer* cptr2 = new customer("Ramanujan", 32, 'M', 1729);

    cptr2->print();

    return 0;
}