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
node* insertAtBegin(node* head, int num){
    node* temp = new node(num);
    temp->next = head;
    if (head != NULL){
        head->prev = temp;
    }
    return temp;


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
    node* new_head = insertAtBegin(head, num);
    printDLL(new_head);
    return 0;
}