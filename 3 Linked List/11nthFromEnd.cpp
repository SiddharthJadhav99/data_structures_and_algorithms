#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data  = x;
        next = NULL;
    }
};
//naive method
void nthElementEnd(node* head, int n){
    node* curr = head;
    int count = 0;
    if (head == NULL){
        return;
    }
    while(curr != NULL){
        count++;
        curr = curr->next;
    }
    if (n > count){
        return;
    }
    else{
    int front = count-n;
    int i = 0;
    curr = head;
    while(i < front){
        curr = curr->next;
        i++;
    }
    cout<<curr->data;
    }
}
//efficient method
void nthElementEndE (node* head, int n){
    if (head == NULL){
        return;
    }
    node* first = head;
    node* second = head;
    int i = 0;
    while (i < n){
        if (first == NULL){ 
            return;
        }
        first = first->next;
        i++;
    }
    while (first != NULL){
        first = first->next;
        second = second->next;
    }
    cout<<second->data;
}
int main(){
    int n;
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node (40);
    cout<<"Enter the value of n: ";
    cin>>n;
    nthElementEndE(head, n);
    return 0;
}