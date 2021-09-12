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

node* insertAtEnd(node* head, int num){
    node* temp = new node(num);
    if (head ==NULL){
        return temp;
    }
    node* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
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
    node* temp1 = new node (20);
    node* temp2 = new node(30);
    int num;
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    cout<<"Enter the element to be inserted: ";
    cin>>num;
    node* new_head = insertAtEnd(head, num);
    printDLL(new_head);
    return 0;
}