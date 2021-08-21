#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node (int x){
        data = x;
        next = NULL;
    }
};
void printNode(Node *head){
    Node *temp = head;
    while (temp != NULL){
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
}
int main(){
    // Node *head = NULL;
    // Node *second = NULL;
    // Node *third = NULL;
    // head = new Node(10);
    // second = new Node(20);
    // head->next = second;
    // third = new Node (30);
    // second->next = third;
    //alternative approach
    
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printNode(head);

    
}