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

// time : O(height)
int findMinimum(TreeNode* root){

    if(root == NULL){
        // tree is empty
        return INT_MAX;
    }
    
    while(root->left != NULL){
        root = root->left;
    }

    return root->val;
}

// time : O(height)
int findMaximum(TreeNode* root){

    if(root == NULL){
        // tree is empty
        return INT_MIN;
    }
    
    while(root->right != NULL){
        root = root->right;
    }

    return root->val;
}

bool checkBST(TreeNode* root){
    
    // Base Case
    if(root == NULL){
        return true;
    }

    // Recursive Case

    // f(root) : Check if the given tree is a BST

    // 1. ask your friend to check if the LST is a BST

    bool leftIsBst = checkBST(root->left);

    // 2. ask your friend to check if the RST is a BST

    bool rightIsBst = checkBST(root->right);

    // 3. check yourself if the BST prop. works at the root node

    bool bstWorksAtRoot = root->val > findMaximum(root->left) && root->val < findMinimum(root->right);

    return leftIsBst && rightIsBst && bstWorksAtRoot;

}

class triple{
public:
    int minVal;
    int maxVal;
    bool isBst;
};

triple checkBSTOptimized(TreeNode* root){
    triple t;

    // Base case

    if(root == NULL){
        t.isBst = true;
        t.minVal = INT_MAX;
        t.maxVal = INT_MIN;
        return t;
    }

    // Recursive Case

    triple left = checkBSTOptimized(root->left);
    triple right = checkBSTOptimized(root->right);

    bool bstPropWorksAtRoot = root->val > left.maxVal && root->val < right.minVal;

    t.isBst = left.isBst && right.isBst && bstPropWorksAtRoot;  
    t.minVal = min(left.minVal, min(right.minVal, root->val));
    t.maxVal = max(left.maxVal, max(right.maxVal, root->val));

    return t;
}

bool checkBSTUsingRange(TreeNode* root, long long lb, long long ub){
    // Base Case
    if(root == NULL){
        return true;
    }

    // Recursive Case

    return root->val > lb && root->val < ub && checkBSTUsingRange(root->left, lb, root->val) && checkBSTUsingRange(root->right, root->val, ub);

}

int main() {
    TreeNode* root = NULL;

    root = new TreeNode(10);
    root->left = new TreeNode(5);
    // root->right = new TreeNode(30);
    // root->left->left = new TreeNode(40);
    // root->left->right = new TreeNode(50);
    // root->right->right = new TreeNode(60);
    // root->left->right->left = new TreeNode(70);

    cout << checkBSTOptimized(root).isBst << endl;

    long long lb = (long long) INT_MIN - 1;
    long long ub = (long long) INT_MAX + 1;

    checkBSTUsingRange(root, lb, ub) ? cout << "true" << endl : cout << "false" << endl;

    return 0;

}