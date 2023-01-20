/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
//recusive way 
    if (head == NULL || head->next == NULL) return head;
    // Recursive call
    ListNode* rest = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;

        // itrative way
    // ListNode *temp = NULL;
    // ListNode *prev = NULL;
    // ListNode *current = node;
    // while(current != NULL) {
    //     temp = current->next;
    //     current->next = prev;
    //     prev = current;
    //     current = temp;
    // }
    // node = prev;
    // return node;
    }
};