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
node* reverseLinkedList(node* head){
    if (head == NULL){
        return NULL;
    }
    if (head->next == NULL){
        return head;
    }
    node* prev = NULL;
    node* curr = head;
    while (curr != NULL){
        node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;

}
void printLL(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    node* new_head = reverseLinkedList( head);
    printLL(new_head);
    return 0;
}