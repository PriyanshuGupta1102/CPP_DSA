#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
    
}

int main() {
    vector<string> v;

    v.push_back("tanmay");
    v.push_back("yash");
    v.push_back("yatharth");
    v.push_back("abhay");
    v.push_back("sarthak");

    // sort(v.begin(), v.end()); // by default sorting is done 
    sort(v.begin(), v.end(), cmp);
    
    for(string name : v) {
        cout << name << " ";
    }

    return 0;

}
