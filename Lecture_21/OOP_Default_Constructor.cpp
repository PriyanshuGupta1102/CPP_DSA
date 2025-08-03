#include <iostream>
using namespace std;

class customer {
    public :
        string name;
        int age;
        char gender;
        double credits;

        customer() {
            cout << "\nI am inside the default constructor of the customer class\n";
        }

        void print() {
            cout << "name = " << name << endl;
            cout << "age = " << age << endl;
            cout << "gender = " << gender << endl;
            cout << "credits = " << credits << endl << endl; 
        }
};


int main() {

    customer c1;

    // c1.name = "Priyanshu";
    // c1.age = 20;
    // c1.gender = 'M';
    // c1.credits = 500;

    // cout << endl;

    // customer c2;

    // c2.name = "Aradhya";
    // c2.age = 18;
    // c2.gender = 'F';
    // c2.credits = 400;

    return 0;
}