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
bool searchBST(node* root, int x){
    if(root == NULL){
        return false;
    }
    else if(root->key == x){
        return true;
    }
    else if(root->key < x){
        searchBST(root->right, x);
    }
    else{
        searchBST(root->left, x);
    } 
}

//iterative approach
bool search(node* root, int x){
    while(root != NULL){
        if(root->key == x){
            return true;
        }
        else if(root->key < x){
            root = root->right;
        }
        else{
            root = root->left;
        }
    }
    return false;
}

int main(){
    node* root = new node(15);
    root->left = new node(5);
    root->left->left = new node(3);
    root->right = new node(20);
    root->right->left = new node(18);
    root->right->right = new node(80);
    root->right->left->left = new node(16);
    int x;
    cout<<"Enter the number to be searched: ";
    cin>>x;
    bool res = searchBST(root,x);
    if(res){cout<<"Present";}
    else{cout<<"Absent";}
    return 0;
}