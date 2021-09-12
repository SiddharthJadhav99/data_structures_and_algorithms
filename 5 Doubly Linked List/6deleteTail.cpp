#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
    node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

node* deleteTail(node* head){
    node* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete(curr);
    return head;
}

void printDLL(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    node* head = new node(10);
    node* temp1 = new node(20);
    node* temp2 = new node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    printDLL(head);
    cout<<endl;
    head = deleteTail(head);
    printDLL(head);
    return 0;
}