#include<iostream>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if(!head) return nullptr;

        head->next = removeNodes(head->next);

        while(head->next!=nullptr && head->val < head->next->val){
            return head->next;
        }
        return head;
    }
};
void printList(ListNode* head){
while(head){
    cout<<head->val;
     if (head->next) cout << " -> ";
    head = head->next;
}
}
int main(){
    ListNode* head = new ListNode(5);
    head->next = new ListNode(2);
    head->next->next = new ListNode(13);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(8);

    Solution sol;
head = sol.removeNodes(head);
 cout << "Modified list: ";
    printList(head);

    return 0;
}