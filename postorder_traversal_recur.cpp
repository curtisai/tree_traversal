/*
    File Name: postorder_traversal_recur.cpp
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

 class Solution {
  public:
  	void recursionPart( TreeNode* node, vector<int>& result ){

  		if( node == nullptr )
  			return;
  		else{
  			recursionPart( node->left, result );
  			recursionPart( node->right, result );
  			result.push_back( node->val );
  		}
  	}

  	vector<int> PostOrderTraversal( TreeNode* root ){
  		
  		vector<int> result;

  		recursionPart( root, result );

  		return result;
  	}
};