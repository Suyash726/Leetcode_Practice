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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        
        ListNode *New = new ListNode(0);
        New->next = head;
        ListNode *fast=New;
        ListNode *slow=New;
        
        
        if(head == NULL || head->next == NULL)
            return NULL;
        
        
        for(int i =1;i<=n+1;i++)
        {
            
            if(fast!= NULL || fast->next != NULL)
            {fast = fast->next;}
        }
        while(fast != NULL)
            {fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return New->next;
        
        
        
        
    }
};
