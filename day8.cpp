#include <iostream>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){};
};
TreeNode* insert(TreeNode *root,int v){
    if(root==nullptr){
        return new TreeNode(v);
    }
    if(v<root->val){
        insert (root->left,v);
    }
    else{
        insert (root->right,v);
    }
    return root;
}
TreeNode* deleten(TreeNode *root,int key){
    if(root==nullptr){
        return NULL;
    }
    if(key<root->val){
        deleten (root->left,key);
    }
    else if (key>root->val){
        deleten(root->right,key);
    }
    else{
        if (root->left==nullptr){
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right==nullptr){
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        TreeNode *temp=minvalue(root->right);
        root->val=temp->val;
        TreeNode *temp=deleten(root->right,key);
    }
    return root;
}
void minvalue(TreeNode *node){
    while (node->left != nullptr) {
        node = node->left;
    }
    return node->data;
}