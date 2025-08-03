#include <iostream>
using namespace std;

int main() {
    int arr[3][4] = {{10,15,20,25},
                     {30,35,40,45},            
                     {50,55,60,65}};

    cout << arr[0][1] << endl;
    cout << arr[1][2] << endl;
    cout << arr[2][3] << endl;
    
    // Row Specify Krna Optional hai 2D Array mein
    // But Column Specify krrna Mandatory hota hai 
    int brr[][4] = {{100, 200, 300, 400},
                    {500, 600, 700, 800}};
    
    cout << sizeof(brr) << "B" << endl;

    cout << brr[0][1] << endl;
    cout << brr[1][2] << endl;

    int crr[][4] = {{1000, 2000, 3000, 4000},
                    {5000, 6000}}; // There are 4 values space but given only 2 so other will be filled by 0

    cout << crr[1][0] << endl;
    cout << crr[1][1] << endl;
    cout << crr[1][2] << endl;
    cout << crr[1][3] << endl;


    int zrr[3][4] = {}; // To Initialize a 2D Array with Zero

    return 0;
}