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

        void print() {
            cout << "name = " << name << endl;
            cout << "age = " << age << endl;
            cout << "gender = " << gender << endl;
            cout << "credits = " << credits << endl << endl; 
        }
};


int main() {

    customer c1("Ramanujan", 32, 'M', 1729);
    cout << &c1 << endl;

    customer* cptr = &c1;
    cout << cptr << endl;

    cout << "name = " << (*cptr).name << endl;
    cout << "age = " << (*cptr).age << endl;
    cout << "gender = " << (*cptr).gender << endl;
    cout << "credits = " << (*cptr).credits << endl << endl;

    (*cptr).print();

    cout << "name = " << cptr->name << endl;
    cout << "age = " << cptr->age << endl;
    cout << "gender = " << cptr->gender << endl;
    cout << "credits = " << cptr->credits << endl << endl;

    cptr->print();

    return 0;
}