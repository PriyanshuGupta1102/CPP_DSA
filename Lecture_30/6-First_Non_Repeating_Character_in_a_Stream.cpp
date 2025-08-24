#include <iostream>
#include <queue>

using namespace std;

int main() {
    char ch;

    int freqMap[26] = {0};
    queue<char> q;

    while(true){
    cin >> ch;
    freqMap[ch-'a']++;
    
    if(freqMap[ch - 'a'] == 1){
        // ch, as of now, is a non-repeating char so track it in the queue
        q.push(ch);
    }

    // Now find the list non-repeating char. in the stream after reading ch

    while(!q.empty() && freqMap[q.front() - 'a'] > 1){
        q.pop();
    }

    if(q.empty()){
        cout << "-1" << " ";
    }else{
        cout << q.front() << " ";
    }
    return 0;
    }
}