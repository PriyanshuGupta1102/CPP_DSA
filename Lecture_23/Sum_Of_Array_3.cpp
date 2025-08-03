#include<iostream>
#include<vector> 
using namespace std;

int f(int X[], int n, int i){

    // Base Case
    if(i == n){
        return 0;
    }

    // Recursive Case
    int A = f(X, n, i + 1);

    return X[i] + A;
}

int main() {
  int X[] = {10,20,30,40,50};
  int n = sizeof(X) / sizeof(int);

  cout << f(X, n, 0) << endl;

    return 0;
}