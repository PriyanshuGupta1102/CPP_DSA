#include <iostream>
#include <set> 
using namespace std;

class customer {
public:
        string name;
        int age;
        customer(string name, int age) {
            this->name = name;
            this->age = age;
        }
};

class ageCmp {
public:
    bool operator() (customer a, customer b) const {
        if(a.age < b.age) {
            return true;
        }
        return false;
    }

};

int main() {
    set<customer, ageCmp> s;

    s.insert(customer("Akshat", 20));
    s.insert(customer("Lavanya", 19));
    s.insert(customer("Aradhya", 18));
    s.insert(customer("Anu", 20));

    for(customer c : s){
        cout << c.name << " " << c.age << endl;
    }

    cout << endl;

    return 0;
}