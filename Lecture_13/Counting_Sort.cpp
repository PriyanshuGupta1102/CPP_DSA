#include <iostream> 
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std; 

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int k;
    cin >> k;
    
    // time : 2n ~ O(n)
    // space : k+1 ~ O(k) due to freq[]

    vector<int> freq(k+1, 0);
    for(int i = 0; i < n; i++) { // n step and each step is const therefore ~ O(n)
        // int x = v[i];
        // freq[x]++;

        freq[v[i]]++;
    }

    // for(int i = 0; i <= k; i++) {
    //     cout << "freq(" << i << ") = " << freq[i] << endl;
    // }

    for(int i = 0; i <= k; i++) { // n steps / couts and each step is const therefore ~ O(n)
        // print i freq[i] times
        for(int j = 1; j <= freq[i]; j++) {
            cout << i << " ";
        }
    }

    return 0;

  

}