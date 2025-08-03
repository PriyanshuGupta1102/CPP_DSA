#include<iostream>
#include<cmath> // Include cmath for mathematical functions
using namespace std;

bool isPrime(int n){ // Function to check if a number is prime
    if(n <= 1) return false; // If n is less than or equal to 1, it is not prime.
    for(int i = 2; i <= sqrt(n); i++){ // Check divisibility from 2 to the square root of n.
        if(n % i == 0) return false; // If n is divisible by i, it is not prime.
    }

    return true; // If no divisors were found, n is prime.
}

int main(){
    int a; 
    cout << "Enter a number: ";
    cin >> a; // Input a number from the user.
    int i = 2; // Initialize i to 2.
    // bool isPrime(a);
    if(isPrime(a)){ // Check if a is prime using the isPrime function.
        cout << a << " is prime." << endl; // Print that a is prime.
    } else {
        cout << a << " is not prime." << endl; // Print that a is not prime.
    }
    return 0; // Return 0 to indicate successful execution
} 