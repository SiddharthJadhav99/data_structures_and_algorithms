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

node* insert(node* root, int x){
    if(root == NULL){
        return new node(x);
    }
    else if(x < root->key){
        root->left = insert(root->left, x);
    }
    else if(x > root->key){
        root->right = insert(root->right, x);
    }
    return root;
}

node* ceiling(node* root, int x){
    node* res = NULL;
    if(root == NULL){
        return root;
    }
    else if(root->key < x){
        root = root->right;
    }
    else{
        res = root;
        root = root->left;
    }
    return res;
}
int main(){
    int x;
    node* root = NULL;
    root = insert(root,50);
    root = insert(root,30);
    root = insert(root,10);
    root = insert(root,40);
    root = insert(root,70);
    root = insert(root,60);
    root = insert(root,55);
    root = insert(root,80);
    cout<<"Enter the number: ";
    cin>>x;
    node* new_root = ceiling(root,x);
    cout<<new_root->key;
    return 0;
}