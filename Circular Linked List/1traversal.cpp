#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data = x;
        next == NULL;
    }
};
node* traversalLL(node* head){
    if(head == NULL){
        return NULL;
    }
    node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);
    return head;
}

int main(){
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = head;
    node* new_head = traversalLL(head);
    return 0;
}