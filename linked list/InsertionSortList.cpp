#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if (!head || !head->next) return head;
        
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = head;
        
        while (curr) {
            ListNode* nextNode = curr->next;
            ListNode* prev = dummy;
            
            while (prev->next && prev->next->val < curr->val) {
                prev = prev->next;
            }
            
            curr->next = prev->next;
            prev->next = curr;
            
            curr = nextNode;
        }
        
        return dummy->next;
    }
};

int main() {
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);

    Solution sol;
    head = sol.insertionSortList(head);

    ListNode* temp = head;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}