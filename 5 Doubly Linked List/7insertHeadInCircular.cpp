#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
    node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
};

node* insertHead(node* head, int num){
    node* temp = new node(num);
    if (head == NULL){
        return temp;
    }
    node* curr = head;
    curr->prev->next = temp;
    curr->prev = temp;
    temp->prev = curr->prev;
    temp->next = curr;
    return temp;
}

void printDLL(node* head){
    node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);
}

int main(){
    node* head = new node(10);
    node* temp1 = new node(20);
    node* temp2 = new node(30);
    int num;
    head->prev = temp2;
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp2->next = head;
    printDLL(head);
    cout<<endl;
    cout<<"Enter the number to insert: ";
    cin>>num;
    head = insertHead(head, num);
    printDLL(head);
    return 0;
}