#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class node {
public:
    int val;
    node* left;
    node* right;
    node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

node* input_tree() {
    int val;
    cin >> val;
    node* root;
    if (val == -1) {
        root = NULL;
    } else {
        root = new node(val);
    }
    queue<node*> q;
    if (root) q.push(root);
    while (!q.empty()) {
        node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        node* left;
        node* right;
        if (l == -1) left = NULL;
        else left = new node(l);
        if (r == -1) right = NULL;
        else right = new node(r);
        f->left = left;
        f->right = right;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

void printing_leafnode(node* root, vector<int>& v) {
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        v.push_back(root->val);
    }
    printing_leafnode(root->left, v);
    printing_leafnode(root->right, v);
}

int main() {
    node* root = input_tree();

    vector<int> v;
    printing_leafnode(root, v);
    for (int a : v) {
        cout << a << " ";
    }

    return 0;
}
