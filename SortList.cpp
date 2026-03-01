#include<bits/stdc++.h>
using namespace std;
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

/* ListNode is not 100% working, this given because i hate red mark in my code. 
to check original and base code please check file name MergeSort_linkedList.cpp in this repository.
Thank you 😀 */
 
class ListNode{
    public:
    int val;
    ListNode *next;
    ListNode(int val){
        this->val = val;
        this->next = nullptr;
    }
};



class Solution {
public:
    ListNode* split(ListNode* head){
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            if(fast !=nullptr){
                slow = slow->next;
            }
        }
        ListNode* temp = slow->next;
        slow->next = nullptr;
        return temp;
    }

    ListNode* merge(ListNode*first, ListNode* second){
        if(first == nullptr) return second;
        if(second == nullptr) return first;

        if(first->val < second->val){
            first->next = merge(first->next, second);
            return first;
        }else{
            second->next = merge(first, second->next);
            return second;
        }  
    }

ListNode* mergeSort(ListNode* head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }
    ListNode* second = split(head);
    head = mergeSort(head);
    second = mergeSort(second);
    return merge(head, second);
}

    ListNode* sortList(ListNode* head) {
        return head = mergeSort(head);
    }
};