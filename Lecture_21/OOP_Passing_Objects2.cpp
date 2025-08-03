#include <iostream>
using namespace std;

class customer {
    public :
        string name;
        int age;
        char gender;
        double credits;
};

void modifyAge(customer& c) { // Here Customer Obj is Passed By Reference therefore any changes done to the parameter will be Reflect in the original obj
    c.age++; 
}

int main() {

    customer c1;

    c1.name = "Priyanshu";
    c1.age = 20;
    c1.gender = 'M';
    c1.credits = 500;

    cout << c1.age << endl;

    modifyAge(c1); 

    cout << c1.age << endl;

    return 0;
}