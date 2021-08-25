#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};

node* deleteFirstNode (node* head){
    node* temp = head->next;
    delete head;
    return temp;
}

void printLL(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
}

int main(){
    node* head = new node(8);
    head->next = new node(10);
    head->next->next = new node(20);
    node* new_head = deleteFirstNode (head);
    printLL(new_head);
    return 0;
}