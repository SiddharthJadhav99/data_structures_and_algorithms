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
bool Loopeff(node* head){
    node* dummy;
    node* curr = head;
    while(curr != NULL){
        if(curr->next == NULL){
            return false;
        }
        if(curr->next == dummy){
            return true;
        }
        node* temp = curr->next;
        
    }
    return false;
}
bool Loop(node* head){
    node* curr = head;
    while(curr != NULL){
        node* temp = head;
        while(temp->next != curr){
            if(temp == curr->next->next){
                return true;
            }
            temp = temp->next;
        }
        curr = curr->next;
    }
    return false;
}
int main(){
    node* head = new node(10);
    node* second = new node(15);
    node* third = new node(12);
    node* fourth = new node(20);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = second;
    bool res = Loopeff(head);
    if(res){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}