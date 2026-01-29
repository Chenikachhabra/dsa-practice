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
    void paths(TreeNode* root, string path, vector<string>& ans) {
        if(!root) return;
        if(!path.empty()) path+= "->";
        path += to_string(root->val);
        if(!root->left && !root->right){
            ans.push_back(path);
            return ;
        }
        paths(root->left , path , ans);
        paths(root->right , path , ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        paths(root , "" , ans);
        return ans;
    }
};
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->right = new TreeNode(4);
    Solution sol;
    vector<string> paths = sol.binaryTreePaths(root);
      cout << "Binary Tree Paths:" << endl;
    for (const string& path : paths) {
        cout << path << endl;
    }

    return 0;
}