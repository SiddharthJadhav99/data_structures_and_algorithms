#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int n){
        data = n;
        next = NULL;
    }
};
node* insertAtBegin(node* head, int num){
    node* n = new node(num);
    n->next = head;
    return n;
}
void printLL(node* new_head){
    node* temp = new_head;
    while (temp != NULL){
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
}
int main(){
    int num;
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    cout<<"Enter the number to add at the beginning: ";
    cin>>num;
    printLL(head);
    cout<<endl;
    node* new_head = insertAtBegin(head, num);
    printLL(new_head);
    return 0;
}