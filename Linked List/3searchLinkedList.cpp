#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int d){
        data = d;
        next = NULL;
    }
};
int searchLinkedList(node *head, int n){
    node *temp = head;
    for (int i = 0; temp != NULL; i++){
        if (temp->data == n){
            return i+1;
        }
        temp = temp->next;
    }
    return -1;
}
int searchLinkedListR(node *head, int n, int i){
    if (head == NULL){
        return -1;
    }
    if (head->data == n){
        return i;
    }
    return searchLinkedListR(head->next, n, i+1);
}
int main(){
    int n;
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    cout<<"Enter the number to be searched :";
    cin>>n;
    int i = 1;
    //int pos = searchLinkedList(head,n);
    int pos = searchLinkedListR(head, n, i);
    cout<<pos;
}