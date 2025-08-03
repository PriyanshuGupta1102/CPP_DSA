#include<iostream>
#include<cmath> // Include cmath for mathematical functions

using namespace std;
//Readability
//Modularity
//Reusability
//Maintainability
void printPrimes(int m) { // Function to print prime numbers up to m
    for (int i = 2; i <= m; i++) { // Loop from 2 to m
        bool isPrime = true; // Assume i is prime
        for (int j = 2; j <= sqrt(i); j++) { // Check divisibility from 2 to the square root of i
            if (i % j == 0) { // If i is divisible by j, it is not prime
                isPrime = false; // Set isPrime to false
                break; // Exit the inner loop
            }
        }
        if (isPrime) { // If i is prime, print it
            cout << i << " ";
        }
    }
    cout << endl; // Print a newline after all primes are printed
}
int main(){
    int m;
    cout << "Enter the value of n";
    cin >> m;

    printPrimes(m);
} 