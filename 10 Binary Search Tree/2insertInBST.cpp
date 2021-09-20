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

//recursive approach

node* rinsert(node* root, int x){
    if (root == NULL){
        node* temp = new node(x);
        root = temp;
        return root;
    }
    else if (root->key < x){
        root->right = rinsert(root->right, x);
    }
    else{
        root->left = rinsert(root->left, x); 
    }
    return root;
}

//iterative approach

bool insert(node* root, int x){
    node* temp = new node(x);
    if(root == NULL){
        root = temp;
        return true;
    }
    while(root->left != NULL && root->right != NULL){
        if(root->key == x){
            return false;
        }
        else if(root->key < x){
            root = root->right;
        }
        else{
            root = root->left;
        }
    }
    if(root->key < x){
        root->right = temp;
        return true;
    }
    else{
        root->left = temp;
        return true;
    }
}

int main(){
    int x;
    node* root = new node(10);
    root->left = new node(5);
    root->right = new node(15);
    root->right->left = new node(12);
    root->right->right = new node(18);
    cout<<"Enter the number to be Inserted: ";
    cin>>x;
    bool res = insert(root,x);
    if(res){cout<<"Inserted Successfully!";}
    else{cout<<"Failed to Insert!";}
    return 0;
}