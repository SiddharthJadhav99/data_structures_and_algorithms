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

int main(){
    node* head = new node(10);
    head->left = new node(20);
    head->right = new node(30);
    head->left->left = new node (50);
    return 0;
}