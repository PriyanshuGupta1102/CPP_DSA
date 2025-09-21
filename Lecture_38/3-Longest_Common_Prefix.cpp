#include <iostream>
#include <unordered_map>
using namespace std;

class node {
public:
    char ch;
    bool terminal;
    unordered_map<char, node*> childMap;
    int freq;

    node(char ch){
        this->ch = ch;
        this->terminal = false;
        this->freq = 0;
    }
};

class trie {
    node* root;

public:

    trie() {
        root = new node('#');
    }
    
    // time : O(len of the str)

    void insert(string str) {
        node* cur = root;
        for(char ch : str){
            if(cur->childMap.find(ch) == cur->childMap.end()) {
                // cur node doesn't have a child node with the value ch
                cur->childMap[ch] = new node(ch);
            }
            cur = cur->childMap[ch];
            cur->freq++;
        }
        cur->terminal = true;
        // n++;
    }

    // time : O(len of str)

    string longestCommonPrefix(string str) {
        string ans = "";
        node* cur = root;
        for(char ch : str) {
            cur = cur->childMap[ch];
            // if(cur->freq != n){
            //     break;
            // }
            ans += ch;
        }
        return ans;
    }
};

int main() {
    string words[] = {"flow", "floor", "flys"};

    trie t;
    for(string word : words){
        t.insert(word);
    }

    for(string word : words) {
        // find the shortest unique prefix of word
        cout << t.longestCommonPrefix(words[0]) << endl;
    }

    return 0;

}