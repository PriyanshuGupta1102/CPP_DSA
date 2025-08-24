#include <iostream>
using namespace std; 

// Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
// Output : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1

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

void dfs(TreeNode* root){
    // Base Case
    if(root == NULL){
        return;
    }

    // Recursive Case

    // f(root) : Mirror or Invert the given tree

    // 1. ask your friend to mirror or invert the leftSubTree

    dfs(root->left);

    // 2. ask your friend to mirror or invert the leftSubTree

    dfs(root->right);

    // 3. Perform swap at the root node

    swap(root->left, root->right);
}

int main() {
    TreeNode* root = buildTree();

    dfs(root);

    printPreOrder(root);

    return 0;
}