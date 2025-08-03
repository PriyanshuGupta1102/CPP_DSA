#include <iostream>
using namespace std;

// time : O(n^2)
// space : O(1)

int findRudeness(const string& str){
    int n = str.size();
    int rudeness = 0;

    for(int i = 0; i <= n - 2; i++){
        if(str[i] == 'a'){
            for(int j = i + 1; j < n; j++){
                if( str[j] == 'b'){
                    rudeness++;
                }
            }
        }
    }
    return rudeness;
}

int main(){
    string str = "ababbaab";
    

    cout << findRudeness(str) << endl;

    return 0;
}