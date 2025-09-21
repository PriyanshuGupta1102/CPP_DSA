#include <iostream>
#include <queue> 
using namespace std; 

class TreeNode {
public :
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode* buildTree() {

    int val;
    cin >> val;

    if(val == -1){
        return NULL;
    }

    TreeNode* root = new TreeNode(val);

    // ask your friend to build the leftSubTree from its preOrder

    root->left = buildTree();

    // ask your friend to build the rightSubTree from its preOrder

    root->right = buildTree();

    return root;
}

void printPreOrder(TreeNode* root){
    // Base Case
    if(root == NULL){
        cout << -1 << " ";
        return;
    }

    // Recursive Case

    // Print the preOrder of the given tree

    // 1. Process the root node

    cout << root->val << " ";

    // 2. Print the preOrder of the leftSubTree

    printPreOrder(root->left);

    // 3. Print the preOrder of the rightSubTree

    printPreOrder(root->right);


}

void printInOrder(TreeNode* root){
    // Base Case
    if(root == NULL){
        return;
    }

    // Recursive Case

    // Print the InOrder of the given tree

    // 1. Print the InOrder of the leftSubTree

    printInOrder(root->left);

    // 2. Process the root node

    cout << root->val << " ";

    // 3. Print the InOrder of the rightSubTree

    printInOrder(root->right);


}

// time : O(n)
// space : O(n) due to queue

void printLevelOrder(TreeNode* root){
    
    queue <TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int qsize = q.size();
        while(qsize--){
            TreeNode* cur = q.front();
            q.pop();

        // Process the cur node

        cout << cur->val << " ";

        if(cur->left != NULL){
            // visit the leftChild of cur node
            q.push(cur->left);
        }

        if(cur->right != NULL){
            // visit the rightChild of cur node
            q.push(cur->right);
        }
        }
        cout << endl;
    }

}

// time : O(hgt of Tree)

TreeNode* insert(TreeNode* root, int key){

    // Base Case
    if(root == NULL){
        return new TreeNode(key);
    }

    // Recursive Case

    if(key < root->val){
        // ask your friend to insert the key in the LST (which is also a BST)
        root->left = insert(root->left, key);
    }else{
        // ask your friend to insert the key in the RST (which is also a BST)
        root->right = insert(root->right, key);
    }

    return root;
}

bool searchKey(TreeNode* root, int key){

    // Base Case
    if(root == NULL){
        return false;
    }

    // Recursive Case

    // f(root, key) : check if given key is present in the BST
    if(root->val == key){
        return true;
    }else if(key < root->val){
        // ask your friend to search for the key in the LST which is a BST
        return searchKey(root->left, key);
    }else{
        // ask your friend to search for the key in the RST which is a BST
        return searchKey(root->right, key);
    }
}

int main() {
    TreeNode* root = NULL;

    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 15);
    root = insert(root, 13);
    root = insert(root, 17);

    int key = 17;

    searchKey(root, key) ? cout << "true" << endl : cout << "false" << endl;

    return 0;

}