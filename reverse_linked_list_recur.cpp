/*
    reverse_linked_list_recur.cpp
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
    ListNode* recur( ListNode* node, ListNode*& newHead ){
        if( node->next == nullptr ){
            newHead = node;
            return node;
        }
        else{
            recur( node->next, newHead )->next = node;
            return node;
        }
    }
    ListNode* reverseList(ListNode* head) {
        if ( head == nullptr || head->next == nullptr )
            return head;
        ListNode* newHead = nullptr;
        ListNode* end = recur( head, newHead );
        end->next = nullptr;
        return newHead;
    }
};