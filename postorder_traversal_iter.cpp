/*
    File Name: postorder_traversal_iter.cpp
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

  	vector<int> PostOrderTraversal( TreeNode* root ){
  		vector<int> result;
  		stack<TreeNode*> myStack;

  		TreeNode* current = root;
  		TreeNode* lastVisited = nullptr;

  		while ( current != nullptr || !myStack.empty() ){

  			while ( current != nullptr ){

  				myStack.push( current );
  				current = current->left;
  			}

  			current = myStack.top();

  			if ( current->right == nullptr || current->right == lastVisited ){

  				myStack.pop();
  				result.push_back( current->val );
  				lastVisited = current;
  				current = nullptr;

  			}
  			else{
  				current = current->right;
  			}
  		}
  		return result;
  	}
};