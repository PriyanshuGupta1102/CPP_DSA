#include <iostream>
#include <queue>

using namespace std;

class Customer{

public:
    string name;
    int age;

    Customer(string name,  int age){
        this->name = name;
        this->age = age;
    }
};

class customerAgeComp{

public:
    // return false if you want a to be given more priority than b
    // otherwise return true
    bool operator()(Customer a, Customer b){
        if(a.age < b.age){
            // Since we are building a minHeap based on customer 
            // age when age of customer a is less than age of 
            // customer b we want a to be ordered before b
            return false;
        }
        return true;
    }

    // return true if you want a to be ordered a before b
//     // otherwise return true
//     bool operator()(Customer a, Customer b){
//         if(a.age > b.age){
//             // Since we are building a minHeap based on customer 
//             // age when age of customer a is less than age of 
//             // customer b we want a to be ordered before b
//             return true;
//         }
//         return false;
//     }

};

int main(){
    priority_queue<Customer, vector<Customer>, customerAgeComp> m; // now it acts as minHeap
    // greater<int> is the Built in Function Object known as Functor 

    m.push(Customer("Priyanshu", 16));
    m.push(Customer("mansi", 19));
    m.push(Customer("sarthak", 21));
    m.push(Customer("harjas", 18));
    m.push(Customer("keya", 17));

    cout << m.size() << endl; // 9

    while(!m.empty()){
        Customer c = m.top();
        cout << c.name << " " << c.age << endl;
        m.pop();
    }

    cout << endl;

    cout << m.size() << endl; // 0

    return 0;
}