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

node* insertAtEnd(node* head, int x){
    node* temp = head;
    if (temp == NULL){
        return new node(x);
    }
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new node(x);
    return head;
}

void printLL(node* head){
    node* temp = head;
    while (temp != NULL){
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
}

int main(){
    int x;
    node* head = new node(8);
    head->next = new node(10);
    head->next->next = new node(20);
    printLL(head);
    cout<<endl;
    cout<<"Enter the number to insert at the end: ";
    cin>>x;
    node* new_head = insertAtEnd(head, x);
    printLL(new_head);
    return 0;
}