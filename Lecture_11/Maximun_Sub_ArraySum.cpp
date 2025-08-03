#include <iostream>
#include <climits> // for INT_MIN 
using namespace std;
//time : O(n^3)
//space : O(1)
int maximunSubarraySum(int arr[], int n)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        { int currentSum = 0;
            for (int k = i; k <= j; k++)
            {
                currentSum += arr[k];
            }
            if (currentSum >= maxSum)
                {
                    maxSum = currentSum;
                }
        }
    }
    return maxSum;
}
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(int);

    cout << maximunSubarraySum(arr, n) << endl;
    return 0;
}