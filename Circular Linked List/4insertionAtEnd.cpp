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
node* insertEnd(node* head, int num){
    node* new_node = new node(num);
    if (head == NULL){
        new_node->next = new_node;
        return new_node;
    }
    node* temp = head;
    while (temp->next != head){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = head;
    return head;
  
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
    head->next->next->next = head;
    cout<<"Enter the numbe to insert: ";
    cin>>num;
    node* new_head = insertEnd(head, num);
    printLL(head);
    return 0;
}