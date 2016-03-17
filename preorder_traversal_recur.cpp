/*
    File Name: preorder_traversal_recur.cpp
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
  	void recursionPart( TreeNode* node, vector<int>& result ){

  		if( node == nullptr )
  			return;
  		else{
  			result.push_back( node->val );
  			recursionPart( node->left, result );
  			recursionPart( node->right, result );
  		}
  	}

  	vector<int> preorderTraversal( TreeNode* root ){

  		vector<int> result;

  		recursionPart( root, result );

  		return result;
  	}
};