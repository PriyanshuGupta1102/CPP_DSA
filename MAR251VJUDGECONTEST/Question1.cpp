#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool generous_Kefa(vector<string> str[], int num){
    int cnt = 0;
    for(string i : str) {
        char ch = str[i];
        for(string j = 0; j < num; j++){
            if(ch == arr[j]){
            cnt++;
        }
        }
        if(cnt == k && i == num){
            return true;
        }
    }
    return false;

}

int main() {
    int num; 
    cin >> num;

    int k;
    cin >> k;

    cout << endl;

    vector<string> str[101];
    
    for(string i : str){
        cin >> str[i];
    }

    if(generous_Kefa(str, num)){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    
    return 0;
}
