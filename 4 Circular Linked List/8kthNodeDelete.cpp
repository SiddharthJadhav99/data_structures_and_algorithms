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
node* deleteKNode(node* head, int k){
    node* curr = head;
    if (head == NULL){
        return NULL;
    }
    if (head->next == head){
        delete(head);
        return NULL;
    }
    for (int i = 0; i < k-2; i++){
        curr = curr->next;
    }
    node* temp = curr->next;
    curr->next = curr->next->next; 
    delete(temp);
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
    int k;
    node* head = new node(20);
    head->next = new node(30);
    head->next->next = new node(40);
    head->next->next->next = head;
    cout<<"Enter the position: ";
    cin>>k;
    node* new_head = deleteKNode(head, k);
    printLL(new_head);
    return 0;
}