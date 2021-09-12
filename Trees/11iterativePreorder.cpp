#include <iostream>
#include <stack>
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

void iterativePreorder(node* root){
    if (root == NULL){
        return;
    }
    stack<node*> s;
    s.push(root);
    while(s.empty() == false){
        node* curr = s.top();
        cout<<curr->key<<" ";
        s.pop();
        if(curr->right != NULL){
            s.push(curr->right);
        }
        if (curr->left != NULL){
            s.push(curr->left);
        }

    }
}

int main(){
    node* root = new node(10);
    root->left = new node(20);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right = new node(30);
    root->right->left = new node(60);
    iterativePreorder(root);
    return 0;
}