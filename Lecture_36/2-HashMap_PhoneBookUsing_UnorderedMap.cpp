#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){
    unordered_map<string, vector<string>> phoneBook;   

    phoneBook["Priyanshu"].push_back("1234");
    phoneBook["Aradhya"].push_back("5678");

    for(auto [contactName, phoneNums] : phoneBook){
        cout << contactName << " ";
        for(string num : phoneNums){
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}