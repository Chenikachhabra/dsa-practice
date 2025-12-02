#include<iostream>
#include<vector>
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
    int getDecimalValue(ListNode* head) {
        int num = 0;
        while(head){
            num = num * 2 + head->val;
            head = head ->next;
        }
        return num;
    }
};
int main (){
     ListNode* head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1);
    Solution s ;
    int result = s.getDecimalValue(head);
    cout<<result;
    return 0;
}