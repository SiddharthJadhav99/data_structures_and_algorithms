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
//naive method
void printMiddle(node* head){
    node* curr= head;
    int count = 0;
    while(curr != NULL){
        count++;
        curr= curr->next;
    }
    curr = head;
    for (int i = 0; i < count/2; i++){
        curr = curr->next;
    }
    cout<<curr->data;
}
//efficient method
void printMiddleE(node* head){
    node* slow = head;
    node* fast = head;
    if (head == NULL){
        return;
    }
    while (fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->data;
}
int main(){
    node* head = new node(10);
    head->next = new node (20);
    head->next->next = new node (30);
    head->next->next->next = new node(40);
    printMiddleE(head);
    return 0;
}