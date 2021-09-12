#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data = x;
        next =NULL;
    }
};
node* deleteLastNode(node* head){
    if (head == NULL){
        return NULL;
    }
    if (head->next == NULL){
        delete(head);
        return NULL;
    }
    node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete(temp->next);
    temp->next = NULL;
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
    node* head = new node (10);
    head->next = new node (20);
    head->next->next = new node (30);
    node* new_head = deleteLastNode(head);
    printLL(new_head);
    return 0;
}