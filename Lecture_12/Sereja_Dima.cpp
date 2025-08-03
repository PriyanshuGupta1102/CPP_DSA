#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of Cards:";
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cout << "Enter the number on Cards: ";
        cin >> v[i];
    }

    int serejaScore = 0;
    int dimaScore = 0;

    int i = 0;
    int j = n - 1;

    bool isSerejaTurn = true;

    while(i <= j) {
        if(isSerejaTurn){
        if(v[i] > v[j]) {
            serejaScore += v[i];
            i++;
        } else {
            serejaScore += v[j];
            j--;
        }
        isSerejaTurn = false;
        } else {
            if(v[i] > v[j]) {
                dimaScore += v[i];
                i++;
            } else {
                dimaScore += v[j];
                j--;
            }
            isSerejaTurn = true;
    }
    

}
cout << serejaScore << " " << dimaScore << endl;
    return 0;
}