#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int sum = 0;
        head = head->next; // skip first 0

        while(head) {
            if(head->val != 0) {
                sum += head->val;
            } else {
                ListNode* newnode = new ListNode(sum);
                temp->next = newnode;
                temp = newnode;
                sum = 0;
            }
            head = head->next; // move forward
        }

        return dummy->next;
    }
};

int main() {
    // Creating linked list: 0 -> 3 -> 1 -> 0 -> 4 -> 5 -> 2 -> 0
    ListNode* head = new ListNode(0);
    head->next = new ListNode(3);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(0);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next->next->next = new ListNode(0);

    Solution sol;
    ListNode* merged = sol.mergeNodes(head);

    // Print merged linked list
    ListNode* temp = merged;
    while(temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    // Free memory
    while(merged) {
        ListNode* nextNode = merged->next;
        delete merged;
        merged = nextNode;
    }

    return 0;
}
