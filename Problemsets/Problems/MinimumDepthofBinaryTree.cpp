#include <algorithm>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int minDepthHelper(TreeNode *root) {
        if (root == nullptr) return 0;
        if (root->left == nullptr && root->right == nullptr) return 1;

        if (root->left == nullptr) return 1 + minDepthHelper(root->right);
        if (root->right == nullptr) return 1 + minDepthHelper(root->left);

        return 1 + std::min(minDepthHelper(root->left), minDepthHelper(root->right));
    }

    int minDepth(TreeNode* root) {
        return minDepthHelper(root);
    }
};