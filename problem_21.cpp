/*
Leetcode 150 Interview Questions

21. Merge Two Sorted Lists

*/

/* ------ Approach 1 ---- */
/*Runtime O(n)*/
/* Linked List */

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;

        if(list1 == NULL) return list2;     // found if any of the list is null
        else if(list2 == NULL) return list1;

        ListNode* head = new ListNode();  // for making head of new list

        if(list1->val <= list2->val) head->val = list1->val;
        else head->val = list2->val;
        head->next = NULL;

        ListNode* newlist = head;


        while(curr1 != NULL && curr2 != NULL){
            ListNode* temp = new ListNode();

            if(curr1->val <= curr2->val){
                temp->val = curr1->val;

                newlist->next = temp;
                curr1 = curr1->next;
            }
            else{
                temp->val = curr2->val;

                newlist->next = temp;
                curr2 = curr2->next;
            }
            newlist = newlist->next;
        }
        if(curr1 == NULL) newlist->next = curr2;
        else if(curr2 == NULL) newlist->next = curr1;

        return head->next;
    }
};