/*
    File Name: inorder_traversal_recur.cpp
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
 * }
 */

 class Solution {

   public:

   	void recursion( TreeNode* root, vector<int>& result ){

   		if( root != nullptr ){

   			recursion( root->left, result );

   			result.push_back( root->val );

   			recursion( root->right, result );
   		}
   		else
   			return;
   	}

   	vector<int> inorder_traversal_recur( TreeNode* root ){

   		vector<int> result;

   		recursion( root, result );

   		return result;

   	}
 };