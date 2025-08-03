#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
     int maxsoFar = 0;
        int n = height.size();
        int i = 0;
        int j = n - 1;
        while(i < j) {
            int wij = j - i;
            int hij = min(height[i], height[j]);
            int aij = wij * hij;
            maxsoFar = max(maxsoFar, aij);
            if(height[i] < height[j]){
                i++;
            }else{
                j--;
            }
        }
        cout << maxsoFar << endl;
        return 0; 
}