#include<iostream>
#include<vector>
using namespace std;
 
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
  right(right) {}
  };
 
class Solution {
public:
 int height(TreeNode * root) {
            if (!root)
                return 0;

            int left = height(root->left);
            if (left == -1)
                return -1;
            int right = height(root->right);
            if (right == -1)
                return -1;
            if (abs(right - left ) >1)
                return -1;
            return max(right, left) + 1;
        }
    bool isBalanced(TreeNode* root) {
          return height(root)!= -1;
       
    }
};
int main(){
      TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    Solution sol;
    if (sol.isBalanced(root)) {
        cout << "Tree is balanced ✅" << endl;
    } else {
        cout << "Tree is NOT balanced ❌" << endl;
    }

  

    return 0;
}