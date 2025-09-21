#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void concertTickets(int n, int m, vector<int> ticketPrice, vector<int> customerPrice){
    sort(ticketPrice.begin(), ticketPrice.end());

    for(int i = 0; i < m; i++){
        int temp = customerPrice[i];

        int result = -1;

        int p = 0;
        int q = n - 1;

        while(p < q){
            if(temp == ticketPrice[p] || temp == ticketPrice[q]){
                cout << temp << endl;
                break;
            }else if(temp > ticketPrice[p]){
                result = ticketPrice[p];
            }else if(temp > ticketPrice[q]){
                result = ticketPrice[q];
            }else{
                cout << result << endl;
            }
            p++;
            q--;
        }

        // cout << result << endl;
    }
}

int main() {

    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<int> ticketPrice;

    vector<int> customerPrice;

    for(int i = 0; i < n; i++){
        int t;
        cin >> t;

        ticketPrice.push_back(t);
    }

    for(int i = 0; i < m; i++){
        int t;
        cin >> t;

        customerPrice.push_back(t);
    }

    concertTickets(n, m, ticketPrice, customerPrice);

    return 0;
}