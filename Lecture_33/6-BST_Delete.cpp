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

// time : O(height)
TreeNode* findMinimum(TreeNode* root){

    if(root == NULL){
        // tree is empty
        return NULL;
    }
    
    while(root->left != NULL){
        root = root->left;
    }

    return root;
}

// time : O(height)
TreeNode* findMaximum(TreeNode* root){

    if(root == NULL){
        // tree is empty
        return NULL;
    }
    
    while(root->right != NULL){
        root = root->right;
    }

    return root;
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

TreeNode* deleteFromBST(TreeNode* root, int key){

    // Base Case
    if(root == NULL){
        return root;
    }

    // Recursive Case

    if(key < root->val){
        // ask your friend to delete the key, if present, from the leftSubtree which is a BST
        root->left = deleteFromBST(root->left, key);
    }else if(key > root->val){
        // ask your friend to delete the key, if present, from the rightSubtree which is a BST
        root->right = deleteFromBST(root->right, key);
    }else{
        // you've reached the node whose value matches the key, delete that node
        if(root->left == NULL && root->right == NULL){
            // node you want to delete is a leaf node
            delete root;
            root = NULL;
        }else if(root->left == NULL && root->right != NULL){
            // node you want to delete is a node with a single right child
            TreeNode* temp = root->right;
            delete root;
            root = temp;
        }else if(root->left != NULL && root->right == NULL){
            // node you want to delete is a node with a single left child 
            TreeNode* temp = root->left;
            delete root;
            root = temp;
        }else{ 
            // node you want to delete is a node with Two Child nodes
            TreeNode* leftMax = findMaximum(root->left);
            swap(root->val, leftMax->val);
            root->left = deleteFromBST(root->left, leftMax->val);

        }
    }
    return root;
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

    int key = 10;

    root = deleteFromBST(root, key);

    printLevelOrder(root);

    cout << endl;

    printInOrder(root);

    return 0;

}