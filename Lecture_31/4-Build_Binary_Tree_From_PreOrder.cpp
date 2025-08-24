#include <iostream>
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

int main() {
    TreeNode* root = NULL; // init tree is empty

    root = buildTree();

    printPreOrder(root); // to verify if we've build the correct tree
    
    cout << endl;

    return 0;
}