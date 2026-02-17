#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

ListNode* swapNodes(ListNode* head, int k) {

    ListNode* first = head;

    for (int i = 1; i < k; i++) {
        first = first->next;
    }

    ListNode* temp = first;
    ListNode* second = head;

    while (temp->next != NULL) {
        temp = temp->next;
        second = second->next;
    }

    int t = first->val;
    first->val = second->val;
    second->val = t;

    return head;
}

void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2;

    head = swapNodes(head, k);

    printList(head);

    return 0;
}
