#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

int leftHeight(TreeNode* root) {
    int h = 0;
    while (root) {
        h++;
        root = root->left;
    }
    return h;
}

int rightHeight(TreeNode* root) {
    int h = 0;
    while (root) {
        h++;
        root = root->right;
    }
    return h;
}

int countNodes(TreeNode* root) {
    if (root == NULL)
        return 0;

    int lh = leftHeight(root);
    int rh = rightHeight(root);

    if (lh == rh)
        return (1 << lh) - 1;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);

    cout << countNodes(root);

    return 0;
}