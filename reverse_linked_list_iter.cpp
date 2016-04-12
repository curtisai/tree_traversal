/*
    reverse_linked_list_iter.cpp
    Xiaolong Zhang
    04/12/2016
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:

    ListNode* reverseList(ListNode* head) {
    	if ( head == nullptr || head->next == nullptr )
    		return head;

    	ListNode* pre_iter = nullptr;
    	ListNode* next_iter = head->next;

    	while ( true ){
    		head->next = pre_iter;
    		pre_iter = head;

    		if ( next_iter != nullptr ){
    			head = next_iter;
    			next_iter = next_iter->next;
    		}
    		else
    			break;
    	}
    	return head;
    }
};