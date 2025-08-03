#include <iostream>
#include <vector> 
using namespace std;

vector<int> merge(const vector<int>& a, const vector<int>& b) {
    int n = a.size(); 
    int m = b.size();

    vector<int> c(n + m);

    int i = 0, j = 0, k = 0;

    while(i <= n - 1 && j <= m - 1) {
        if(a[i] < b[j]) {
            c[k] = a[i];
            i++;
            k++;
        } else {
            c[k] = b[j];
            j++;
            k++;
        }
    }

    while(i <= n - 1) {
        c[k] = a[i];
        i++;
        k++;
    }

    while(j <= m - 1) {
        c[k] = b[j];
        j++;
        k++;
    }

    return c;
} 

int main(){
    vector<int> a = {10, 30, 50, 70, 80};
    vector<int> b = {20, 40, 60};

    vector<int> c = merge(a,b);

    for(int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }


}