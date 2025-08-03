#include <iostream>
using namespace std;

int main() {
    int arr[10][10];

    int m;
    cout << "Enter the No of Rows : " << endl;
    cin >> m;

    int n;
    cout << "Enter the No of Columns : " << endl;
    cin >> n;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }    


    for(int j = 0; j < n; j++) { // iterate over cols
        // print values in the jth Column
        for(int i = 0; i < m; i++) { // iterate over rows
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }    

    

    return 0;
}