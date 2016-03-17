/*
    File Name: preorder_traversal_iter.cpp
    Xiaolong Zhang
    03/16/2016

*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> myStack;

        vector<int> result;
        
        if( root != nullptr ){
        
            myStack.push( root );
      
            while( !myStack.empty() ){
        
                TreeNode* temp = myStack.top();
        
                myStack.pop();
        
                result.push_back( temp->val );
        
                if( temp->right != nullptr )
                	myStack.push(temp->right);

                if( temp->left != nullptr )
                    myStack.push(temp->left);
            }
        }
        return result;
    }
};