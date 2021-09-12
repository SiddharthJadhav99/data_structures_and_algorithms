#include <iostream>
#include <math.h>
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

int heightTree(node* root){
    if(root == NULL){
        return 0;
    }
    else{
        return max(heightTree(root->left), heightTree(root->right))+1;
    }
}
int main(){
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);
    int height = heightTree(root);
    cout<<height<<endl;
    return 0;
}