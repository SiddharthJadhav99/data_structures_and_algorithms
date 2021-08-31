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

struct MyQueue{
    node* head;
    node* rear;
    int size;
    MyQueue(){
        rear = head;
        size = 0;
    }
    bool isEmpty(){
        return (size == 0);
    }
    void enQueue(int x){
        node* temp = new node(x);
        if (isEmpty()){
            head = temp;
            rear = temp;
            size++;
        }
        else{
            rear->next = temp;
            rear = temp;
            size++;
        }
    }
    int deQueue(){
        if(isEmpty()){return;}
        int res = head->data;
        node* temp = head;
        head = head->next;
        if(front == NULL){rear = NULL; }
        delete(temp);
        return res;
        size--;
    }
    int size(){
        return size;
    }
    int getFront(){
        return head->data;
    }
    int getRear(){
        return rear->data;
    }

};