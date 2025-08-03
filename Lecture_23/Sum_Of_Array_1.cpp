#include<iostream>
#include<vector> 
using namespace std;

int f(vector<int> arr, int n){

    // Base Case
    if(n == 0){
        return arr[0];
    }

    // Recursive Case
    int A = f(arr, n - 1);

    return arr[n] + A;
}

int main() {
   vector<int> arr = {10,20,30,40,50};

    cout << f(arr, arr.size() - 1) << endl;

    return 0;
}