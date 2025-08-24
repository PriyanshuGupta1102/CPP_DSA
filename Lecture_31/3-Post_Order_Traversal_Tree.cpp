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

void printPostOrder(TreeNode* root){
    // Base Case
    if(root == NULL){
        cout << -1 << " ";
        return;
    }

    // Recursive Case

    // Print the PostOrder of the given tree

    // 1. Print the PostOrder of the leftSubTree

    printPostOrder(root->left);

    // 2. Print the PostOrder of the rightSubTree

    printPostOrder(root->right);

    // 3. Process the root node

    cout << root->val << " ";


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

    printPostOrder(root);
    
    return 0;
}