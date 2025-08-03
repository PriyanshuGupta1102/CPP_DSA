#include <iostream>
#include <cstring>
using namespace std;

int findRudenessOptimized(const string& str){
    int n = str.size();
    int rudeness = 0;
    int cntb = 0;

    for(int i = str.size() - 1; i >= 0; i--){
        if(str[i] == 'a'){
            rudeness += cntb;
        }else if(str[i] == 'b'){
            cntb++;
        }
    }

    return rudeness;
}

int main(){
    string str = "ababbaab";
    

    cout << findRudenessOptimized(str) << endl;

    return 0;
}