#include <iostream>
using namespace std; 

class customer {
    public :
        string name;
        int age;
        char gender;
        double credits;

        customer(string name, int age, char gender, double credits) {
            cout << "\nI am inside the Parameterised constructor of the customer class\n";
            this->name = name;
            this->age = age;
            this->gender = gender;
            this->credits = credits;
        }

        void print() {
            cout << "name = " << name << endl;
            cout << "age = " << age << endl;
            cout << "gender = " << gender << endl;
            cout << "credits = " << credits << endl << endl; 
        }
};


int main() {

    customer c("Ramanujan", 32, 'M', 1729);
    c.print();

    return 0;
}