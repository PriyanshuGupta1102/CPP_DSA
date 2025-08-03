# include <iostream>
using namespace std;

int main(){
    string str = "cbaeicdeiou";

    int cnt = 0;
    int maxsoFar = 0;

    for(char ch : str) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            cnt++;
            maxsoFar = max(maxsoFar, cnt);
        }else {
            cnt = 0;
        }
    }

    cout << maxsoFar << endl;

    return 0;
}