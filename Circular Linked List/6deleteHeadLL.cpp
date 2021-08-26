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
node* deleteHead(node* head){
    if (head == NULL){
        return NULL;
    }
    if (head->next == head){
        delete head;
        return NULL;
    }
    node* curr = head;
    while(curr->next != head){
        curr = curr->next;
    }
    curr->next = head->next;
    delete(head);
    return curr->next;
}

void printLL(node* head){
    node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);
}

int main(){
    node* head = new node(20);
    head->next = new node(30);
    head->next->next = new node(40);
    head->next->next->next = head;
    node* new_head = deleteHead(head);
    printLL(new_head);
    return 0;
}