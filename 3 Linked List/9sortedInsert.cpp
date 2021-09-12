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
node* sortedInsert(node* head, int num){
    node* temp = new node(num);
    node* curr = head;
    if (head == NULL){
        return temp;
    }
    if (num < head->data){
        temp->next = head;
        return temp;
    }
    while(curr->next != NULL && curr->next->data < num){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
void printLL(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
}
int main(){
    int num;
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    cout<<"Enter the number to insert: "; 
    cin>>num;
    node* new_head = sortedInsert(head, num);
    printLL(new_head);
    return 0;
}