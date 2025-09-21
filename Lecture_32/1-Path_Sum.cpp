// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:

//     // time : O(n)
//     // space : O(h) due to fn, call stack, here h is the height of tree

//     bool dfs(TreeNode* root, int targetSum){
//         // Base Case

//         if(root == NULL){
//             return false;
//         }

//         if(root->left == NULL && root->right == NULL){
//             // you've reached a leaf node
//             if(root->val == targetSum){ // you've found a valid root-to-leaf
//                 return true;
//             }
//             return false; // you didn't find a valid root-to-leaf path
//         }

//         // Recursive Case

//         // f(root) : check if there exists a root-to-leaf path
//         // in the given tree whose sum is equal to targetSum

//         // 1. ask your friend to check if there exists a root-to-leaf 
//         // path in the leftSubtree whose sum is equal to targetSum  - root->val

//         // 2. ask your friend to check if there exists a root-to-leaf 
//         // path in the right-Subtree whose sum is equal to targetSum - root->val

//         return dfs(root->left, targetSum - root->val) || dfs(root->right, targetSum - root->val);

//     }

//     bool hasPathSum(TreeNode* root, int targetSum) {
//        return dfs(root, targetSum);
//     }
// };


// int main() {
//     TreeNode* root = NULL; // init tree is empty

//     root = new TreeNode(5);
//     root->left = new TreeNode(4);
//     root->right = new TreeNode(8);
//     root->left->left = new TreeNode(11);
//     root->right->left = new TreeNode(13);
//     root->right->right = new TreeNode(4);
//     root->left->left->left = new TreeNode(7);
//     root->left->left->right = new TreeNode(2);
//     root->right->right->right = new TreeNode(1);

//     return 0;
// }