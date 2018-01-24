//
//  main.cpp
//  add_two_linked_lists
//
//  Created by Indira Bobburi on 12/3/17.
//  Copyright © 2017 sjsu. All rights reserved.
//

#include <iostream>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
 

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *head, *res, *tmp;
        
        int carry = 0;
        bool head_init = false;
        while(l1 != nullptr || l2 != nullptr || carry != 0)
        {
            if(l1 != nullptr)
            {
                carry += l1->val;
                l1 = l1->next;
            }
            
            if(l2 != nullptr)
            {
                carry += l2->val;
                l2 = l2->next;
            }
            
            tmp = new ListNode(carry%10);
            if(!head_init)
            {
                head = tmp;
                res = tmp;
                head_init = true;
            }
            else
            {
                res->next = tmp;
                res = tmp;
            }
            
            carry = carry/10;
        }
        
        return head;
    }
    
    void print(ListNode* l)
    {
        cout << endl;
        while(l != nullptr)
        {
            cout << l->val;
            l = l->next;
        }
        cout << endl;
    }

int main(int argc, const char * argv[]) {
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    l1->next->next->next = nullptr;
    
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    l2->next->next->next = nullptr;
    
    ListNode* l = addTwoNumbers(l1, l2);
    print(l);
    
    return 0;
}

