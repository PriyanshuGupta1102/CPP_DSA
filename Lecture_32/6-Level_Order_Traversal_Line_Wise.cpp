#include <iostream>
#include <queue>
using namespace std; 

// Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1

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

int main() {
    TreeNode* root = buildTree();

    printLevelOrder(root);

    return 0;

}