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

int main() {
    TreeNode* root = NULL; // init tree is empty

    root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);
    root->right->right = new TreeNode(60);
    root->left->right->left = new TreeNode(70);

    printPreOrder(root);
    
    return 0;
}