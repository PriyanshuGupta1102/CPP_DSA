#include<iostream>
#include<cstring>
using namespace std;

int main() {
    // Declare an array of integers with 5 elements
    // int numbers[5];

    // // Initialize the array with values
    // numbers[0] = 10;
    // numbers[1] = 20;
    // numbers[2] = 30;
    // numbers[3] = 40;
    // numbers[4] = 50;

    // // Print the values of the array
    // for (int i = 0; i < 5; i++) {
    //     cout << "Element at index " << i << ": " << numbers[i] << endl;
    // }

    // int arr[5] = {1,2,3,4,5}; // Declare and initialize an array of integers with 5 elements

    // for(int i = 0; i < 5; i++) { // Loop through the array
    //     cout << "Element at index " << i << ": " << arr[i] << endl; // Print each element
    // } 
    // int arr[100];

    // int n; 
    // cout << "Enter the number of elements in the array: ";
    // cin >> n;

    // for(int i = 0; i < n; i++) {
    //     cin >> arr[i]; // Input elements into the array
    // }

    // for(int i = 0; i < n; i++) {
    //     cout << "Element at index " << i << ": " << arr[i] << endl; // Print each element
    // } 

    // int F[5];

	// memset(F, 0, sizeof(F));

	// for (int i = 0; i < 5; i++) {
	// 	cout << F[i] << " ";
	// }

    // cout << endl;

    // int G[5];

	// memset(G, -1, sizeof(G));

	// for (int i = 0; i < 5; i++) {
	// 	cout << G[i] << " ";
	// }

	// cout << endl;

    // int H[5];

	// memset(H, 2, sizeof(H));

	// for (int i = 0; i < 5; i++) {
	// 	cout << H[i] << " ";
	// }

	// cout << endl;

	// memset can only be used to init array with either 0 or -1
	// since it assigns values byte-wise

    int K[5];

	for (int i = 0; i < 5; i++) {
		K[i] = 2;
	}

	for (int i = 0; i < 5; i++) {
		cout << K[i] << " ";
	}

	cout << endl;

    return 0;
}