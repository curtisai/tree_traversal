/*
    File Name: inorder_traversal_iter.cpp
    Xiaolong Zhang
    03/16/2016
*/


/*
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 class Solution{
   public:
   	vector<int> inorderTraversal( TreeNode* root ) {

   		vector<int> result;

   		stack<TreeNode*> nodeStack;

   		if( root == nullptr )
   			result;

   		TreeNode* temp = root;

   		while( temp || !nodeStack.empty() ) {

   			while( temp ){

   				nodeStack.push( temp );

   				temp = temp->left;
   			}

   			temp = nodeStack.top();

   			nodeStack.pop();

   			result.push_back( temp->val );
   			
   			temp = temp->right;
   		}
   		return result;
   	}
 };