#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode();
        ListNode *head = dummy;
        int carry = 0;
        
        while ( l1 || l2 || carry !=0) {
            int sum = 0;
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2->val;
                l2= l2-> next;
            }
            sum += carry;
            
            
            carry = sum/10;
            ListNode *new_node = new ListNode(sum%10);
            head-> next = new_node;
            head = head -> next;
        }
        return dummy->next;
    }
};
int main()
{
    ListNode l3[3] = {5,6,4};
    ListNode head[3] = {2,4,3};
    // ListNode *x = head[3];
    // int size = l1.size() ;
    // ListNode (l2[3]) = {5,6,4};
    // int sum = l1->val + l2->val;
    // int sum_next = l1->next + l2->next;
    // for (size_t i = 0; i < 3; i++)
    // {
        
        // ListNode ne = arr[1];
        // ListNode *next = &ne;
        // ListNode(x)
        // ListNode ne = arr[1];

    Solution solution;
    ListNode *reult = solution.addTwoNumbers(head, l3);
        cout << "y : " <<  reult << endl;
        // cout << "next : " << y->next << endl;

    // }

    return 0;
}