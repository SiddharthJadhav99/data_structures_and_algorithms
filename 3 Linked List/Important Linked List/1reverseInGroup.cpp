#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};
node* reverseK(node* head, int k){
    node* curr = head;
    node* prevhead = NULL;
    bool isFirst = true;
    while(curr != NULL){
        node* first = curr;
        node* prev = NULL;
        int count = 0;
        while( curr != NULL && count < k){
            node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(isFirst){
            head = prev;
            isFirst = false;
        }
        else{
            prevhead->next = prev;
        }
        prevhead = first;
    }
    return head;
}
node* reverseGroup(node* head, int k){
    node* curr = head;
    node* prev = NULL;
    node* next = NULL;
    int count = 0;
    while(curr != NULL && count < k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next != NULL){
        node* rest_head = reverseGroup(next, k);
        head->next = rest_head;
    }
    return prev;
}
void printLL(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
    }
    cout<<endl;
}
int main(){
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    int k = 3;
    node* new_head = reverseGroup(head, k);
    printLL(new_head);
    return 0;
}