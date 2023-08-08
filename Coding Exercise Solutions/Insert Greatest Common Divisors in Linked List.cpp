//https://leetcode.com/contest/biweekly-contest-110/submissions/detail/1013025788/

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
    
    int gcd(int a, int b)   
    {  
        if (b == 0)   
            return a;  
        
        return gcd(b, a % b);

    }  
    
    
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        if(head->next==NULL || head == NULL){
            return head;
        }
        
        ListNode* point = head;
        
        while(point->next!=NULL){
            
            if(point->next!=NULL){
                
                int f=point->val;
                int g= point->next->val;
                
                int num= gcd(f,g) ;
                
                ListNode* temp= new ListNode(num);
                
                ListNode* a = point->next;
                point->next=temp;
                temp->next=a;    
                
                point=point->next->next;
            }
            
        }
        
        return head;
      
    }
};
