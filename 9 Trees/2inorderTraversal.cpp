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

void inOrder(node* root){
        if (root != NULL){
            inOrder(root->left);
            cout<<root->key<<" ";
            inOrder(root->right);
        }
}

int main(){
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);
    inOrder(root);
    return 0;
}
