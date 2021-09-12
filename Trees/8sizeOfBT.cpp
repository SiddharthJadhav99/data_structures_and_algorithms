#include <iostream>
using namespace std;
struct node{
    int key;
    node* left;
    node* right;
    node(int x){
        key = x;
        left = NULL;
        right = NULL;
    }
};

int binaryTreeSize(node* root){
    if (root == NULL){
        return 0;
    }
    else{
        return 1+binaryTreeSize(root->left)+binaryTreeSize(root->right);
    }
}

int main(){
    node* root = new node(10);
    root->left = new node(20);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right = new node(30);
    root->right->right = new node(60);
    int size = binaryTreeSize(root);
    cout<<"Size: "<<size;
    return 0;
}