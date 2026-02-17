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

ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

    if (headA == NULL || headB == NULL)
        return NULL;

    ListNode* p1 = headA;
    ListNode* p2 = headB;

    while (p1 != p2) {

        if (p1 == NULL)
            p1 = headB;
        else
            p1 = p1->next;

        if (p2 == NULL)
            p2 = headA;
        else
            p2 = p2->next;
    }

    return p1;  
}

int main() {

    ListNode* common = new ListNode(7);
    common->next = new ListNode(8);

    ListNode* headA = new ListNode(1);
    headA->next = new ListNode(2);
    headA->next->next = new ListNode(3);
    headA->next->next->next = common;

    ListNode* headB = new ListNode(4);
    headB->next = new ListNode(5);
    headB->next->next = common;

    ListNode* result = getIntersectionNode(headA, headB);

    if (result != NULL)
        cout << "Intersection at node with value: " << result->val << endl;
    else
        cout << "No intersection found" << endl;

    return 0;
}
