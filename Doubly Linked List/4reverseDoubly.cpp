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
node* reverseDoubly(node* head){
    if (head == NULL || head->next == NULL){
        return head;
    }
    node* curr = head;
    node* prev = NULL;
    while(curr != NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
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
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    printDLL(head);
    cout<<endl;
    node* new_head = reverseDoubly(head);
    printDLL(new_head);
    return 0;
}
