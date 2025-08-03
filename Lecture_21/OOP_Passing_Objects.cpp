#include <iostream>
using namespace std;

class customer {
    public :
        string name;
        int age;
        char gender;
        double credits;
};

void print(const customer& c) { // Here Customer Obj is by Passed by const-ref to avoid copy  
    cout << "name = " << c.name << endl;
    cout << "age = " << c.age << endl;
    cout << "gender = " << c.gender << endl;
    cout << "credits = " << c.credits << endl << endl; 
    // c.age++; // since c is a const-ref, you cannot make changes in it 
}

int main() {

    customer c1;

    c1.name = "Priyanshu";
    c1.age = 20;
    c1.gender = 'M';
    c1.credits = 500;

    print(c1); 

    cout << endl;

    customer c2;

    c2.name = "Aradhya";
    c2.age = 18;
    c2.gender = 'F';
    c2.credits = 400;

    print(c2); 

    return 0;
}