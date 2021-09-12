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
node* insertEff(node* head, int num){
    node* temp = new node(num);
    if (head == NULL){
        temp->next = temp;
        return temp;
    }
    temp->next = head->next;
    head->next = temp;
    int t = head->data;
    head->data = temp->data;
    temp->data = t;
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
    head->next->next->next = head;
    cout<<"Enter the numbe to insert: ";
    cin>>num;
    node* new_head = insertEff(head, num);
    printLL(new_head);
    return 0;
}