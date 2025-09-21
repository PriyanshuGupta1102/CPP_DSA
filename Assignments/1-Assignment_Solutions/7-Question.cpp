#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n = 6;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(i % 2 != 0){
                cout << "1" << " ";
            }else{
                if(j == 1 || j == i){
                    cout << "1" << " ";
                }else{
                    cout << "0" << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}