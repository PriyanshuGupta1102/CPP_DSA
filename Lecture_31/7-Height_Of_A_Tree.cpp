#include <iostream>
using namespace std; 

// Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
// Output : 3

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

int height(TreeNode* root){
    // Base Case
    if(root == NULL){
        return -1;
    }

    // Recursive Case

    // f(root) : find the height of the given tree

    // 1. ask your friend to find the height of the leftSubTree

    int heightLeft = height(root->left);

    // 2. ask your friend to find the height of the rightSubTree

    int heightRight = height(root->right);

    return 1 + max(heightLeft, heightRight);
}

int main() {
    TreeNode* root = buildTree();

    cout << height(root) << endl;

    return 0;
}