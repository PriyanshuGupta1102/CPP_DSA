#include <iostream>
#include <unordered_map>
using namespace std;

class node {
public:
    node* left;
    node* right;

    node(){
        this->left = NULL;
        this->right = NULL;
    }
};

class trie {
    node* root;

public:

    trie() {
        root = new node();
    }

    void insert(int n) {
        node* cur = root;
        for(int k = 31; k >= 0; k--){
            int kthBit = (n >> k) & 1;
            if(kthBit == 1) {
                if(cur->right == NULL) {
                    cur->right = new node();
                }
                cur = cur->right;
            }else {
                // kthBit == 0
                if(cur->left == NULL) {
                    cur->left = new node();
                }
                cur = cur->left;
            }
        }
    }

    // time : 32.const ~ O(1)

    bool search(int n) {
        node* cur = root;
        for(int k = 31; k >= 0; k--){
            int kthBit = (n >> k) & 1;
            if(kthBit == 1){
                if(cur->right == NULL){
                    return false;
                }
                cur = cur->right;
            }else{
                // kthBit = 0
                if(cur->left == NULL){
                    return false;
                }
                cur = cur->left;
            }
        }
        return true;
    }
};

int main() {
    int arr[] = {2, 4, 8, 5, 10};
    int n = sizeof(arr) / sizeof(int);

    trie t;
    for(int i = 0; i < n; i++) {
        t.insert(arr[i]);
    }

    int brr[] = {1, 2, 5, 10, 25, 0};
    int m = sizeof(brr) / sizeof(int);

    for(int i = 0; i < m; i++){
        t.search(brr[i]) ? cout << brr[i] << " is present" << endl : 
                            cout << brr[i] << " is absent" << endl;
    }

    cout << endl;

    return 0;

}