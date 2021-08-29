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
struct MyStack{
    node* head;
    int size;
    MyStack(){
        head = NULL;
        size = 0;
    }
    void push(int x){
        node* temp = new node(x);
        temp->next = head;
        head = temp;
        size++;
    }
    int pop(){
        if (head == NULL){
            return INT_MAX;
        }
        int res = head->data;
        node* temp = head;
        head = head->next;
        delete(temp);
        size--;
        return res;
    }
    int peek(){
        if(head == NULL){
            return INT_MAX;
        }
        return head->data;
    }
    int sized(){
        return size;
    }
    bool isEmpty(){
        return (head == NULL);
    }
};
int main(){
    MyStack s;
    cout<<s.pop()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<endl;
    cout<<s.sized()<<endl;
    cout<<s.peek()<<endl;
    s.push(25);
    cout<<s.peek()<<endl;
    cout<<s.sized()<<endl;
    return 0;
}