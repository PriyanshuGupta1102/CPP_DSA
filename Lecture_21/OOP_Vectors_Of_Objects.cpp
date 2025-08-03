#include <iostream>
#include <vector>
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

    vector<customer> v;
    v.push_back(customer("Ramanujan", 32, 'M', 1729));
    v.push_back(customer("JC Bose", 78, 'M', 1729));
    v.push_back(customer("Aryabhata", 78, 'M', 1729));
    v.push_back(customer("Vikram", 52, 'M', 1729));
    v.push_back(customer("Homi", 56, 'M', 1729));

    for(customer c : v) {
        cout << c.name << c.age << c.gender << c.credits << endl;
    }

    

    return 0;
}