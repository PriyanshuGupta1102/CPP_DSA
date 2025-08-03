#include <iostream>
using namespace std;

class customer {
    public :
        string name;
        int age;
        char gender;
        double credits;

        void print() {
            cout << "name = " << name << endl;
            cout << "age = " << age << endl;
            cout << "gender = " << gender << endl;
            cout << "credits = " << credits << endl << endl;
        }
};

int main() {

    customer c1;

    c1.name = "Priyanshu";
    c1.age = 20;
    c1.gender = 'M';
    c1.credits = 500;

    c1.print(); // when you call print on c1, then addr of c1 is implicitly passed by reference 

    cout << endl;

    customer c2;

    c2.name = "Aradhya";
    c2.age = 18;
    c2.gender = 'F';
    c2.credits = 400;

    c2.print();

    return 0;
}