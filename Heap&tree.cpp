#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Insert a node into BST
TreeNode* insertNode(TreeNode* root, int key) {
    if (!root) return new TreeNode(key);
    if (key < root->val)
        root->left = insertNode(root->left, key);
    else if (key > root->val)
        root->right = insertNode(root->right, key);
    return root;
}

// Find minimum value node in a subtree
TreeNode* findMin(TreeNode* root) {
    while (root && root->left)
        root = root->left;
    return root;
}

// Delete a node from BST
TreeNode* deleteNode(TreeNode* root, int key) {
    if (!root) return nullptr;

    if (key < root->val) {
        root->left = deleteNode(root->left, key);
    } 
    else if (key > root->val) {
        root->right = deleteNode(root->right, key);
    } 
    else {
        // Node found
        if (!root->left) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } 
        else if (!root->right) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children
        TreeNode* successor = findMin(root->right);
        root->val = successor->val;
        root->right = deleteNode(root->right, successor->val);
    }

    return root;
}

// Find minimum value in the tree
int findMinValue(TreeNode* root) {
    TreeNode* minNode = findMin(root);
    if (minNode) return minNode->val;
    return -1; // empty tree case
}

int main() {
    int Q;
    cin >> Q;
    if (Q==0) {
        return 0;
    
    }
    TreeNode* root = nullptr;

    while (Q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int x;
            cin >> x;
            root = insertNode(root, x);
        } 
        else if (type == 2) {
            int x;
            cin >> x;
            root = deleteNode(root, x);
        } 
        else if (type == 3) {
            if (root)
                cout << findMinValue(root) << endl;
        }
    }

    return 0;
}
//gpt certified
