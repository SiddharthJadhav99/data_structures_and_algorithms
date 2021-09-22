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

node* deleteNode(node* root, int x);
void inorder(node* root);
node* successor(node* curr);
node* insert(node* root, int x);

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
    cout<<"Enter the number to be deleted: ";
    cin>>x;
    node* new_root = deleteNode(root,x);
    inorder(new_root);
    return 0;
}

node* insert(node* root, int x){
    if(root == NULL){
        node* temp = new node(x);
        root = temp;
        return root;
    }
    else if(root->key < x){
        root->right = insert(root->right, x);
    }
    else if(root->key > x){
        root->left = insert(root->left, x);
    }
    return root;
}

node* deleteNode(node* root, int x){
    if(root == NULL){
        return root;
    }
    if(root->key > x){
        root->left = deleteNode(root->left, x);
    }
    else if(root->key < x){
        root->right = deleteNode(root->right, x);
    }
    else {
        if(root->left == NULL){
            node* temp = root->right;
            delete(root);
            return temp;
        }
        else if(root->right == NULL){
            node* temp = root->left;
            delete(root);
            return temp;
        }
        else{
            node* succ = successor(root);
            root->key = succ->key;
            root->right = deleteNode(root->right, succ->key);
        }
        
    }
    return root;
}

node* successor(node* curr){
    curr = curr->right;
    while(curr != NULL && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

void inorder(node* root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}