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
        
        ListNode head(0);
        ListNode* result = &head;
        ListNode* l1 = list1;
        ListNode* l2 = list2;

        while(l1 != nullptr && l2 != nullptr){

            if(l1->val >= l2->val){
                result->next = l2;
                l2 = l2->next;
            }

            else{
                result->next = l1;
                l1 = l1->next;
            }

            
            result = result->next;

        }

        if(l2 == nullptr){
                while(l1 != nullptr){
                    result->next = l1;
                    result = result->next;
                    l1 = l1->next;
                }
            }

        if(l1 == nullptr){
            while(l2 != nullptr){
                result->next = l2;
                result = result->next;
                l2 = l2->next;
            }
        }

        return head.next;
    }
};