#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};
node* insertAtBegin(node* head, int num){
    node* temp = new node(num);
    if (head == NULL){
        temp->next = temp;
    }
    node* curr = head;
    while(curr->next != NULL){
       curr = curr->next;
    }
    curr->next = temp;
    temp->next = head;
    return temp;
}
void printLL(node* head){
    node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);
}
int main(){
    int num;
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    cout<<"Enter the number to Insert: ";
    cin>>num;
    node* new_head = insertAtBegin(head, num);
    printLL(new_head);
    return 0;
}