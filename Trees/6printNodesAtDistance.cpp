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

void nodeAtHeight(node* root, int n){
    if (root == NULL){return;}
    if (n == 0){
        cout<<root->key<<" ";
    }
    else{
        nodeAtHeight(root->left, n-1);
        nodeAtHeight(root->right, n-1);
    }
}

int main(){
    int n;
    node* root = new node(10);
    root->left = new node(20);
    root->left->left = new node(30);
    root->left->right = new node(40);
    root->right = new node(50);
    root->right->right = new node(60);
    root->right->right->right = new node(70);
    cout<<"Enter the height: ";
    cin>>n;
    nodeAtHeight(root,n);
    return 0;
}