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
node* insertAtPos(node* head, int num, int pos){
    int size = 0;
    node* new_head = new node (num);
    node* temp = head;
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    if (pos < 1 || pos > size){
        cout<<"Enter valid input!";
        return head;
    }
    else if (pos == 1){
        new_head->next = head;
        return new_head;
    }
    else if (pos == size){
        temp->next = new_head;
        return temp;
    }
    else{
        int i = 0;
        node* curr = head;
        while(i < pos-2){
            curr = curr->next;
            i++;
        }
        new_head->next = curr->next; 
        curr->next = new_head;
        return head;
    }
}
void printLL(node* head){
    node* temp = head;
    while (temp != NULL){
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
}
int main(){
    int num;
    int pos;
    node* head = new node(20);
    head->next = new node(23);
    head->next->next = new node(30);

    printLL(head);
    cout<<endl;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the position: ";
    cin>>pos;
    node* new_head = insertAtPos(head, num, pos);
    cout<<endl;
    cout<<"The updated Linked list is: ";
    printLL(new_head);
    return 0;
}