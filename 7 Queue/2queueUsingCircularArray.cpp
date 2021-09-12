#include <iostream>
using namespace std;
struct MyQueue{
    int* arr;
    int front;
    int size;
    int cap;
    MyQueue(int x){
        cap = x;
        front = 0;
        size = 0;
        arr = new int[x];
    }
    bool isEmpty(){
        return (size == 0);
    }
    bool isFull(){
        return (size == cap);
    }
    int getRear(){
        if(isEmpty()){
            return -1;
        }
        else{
            return (front+size-1)%cap;
        }
    }
    void enqueue(int x){
        if (isFull()){return;}
        int rear = getRear();
        rear = (rear+1)%cap;
        arr[rear] = x;
        size++;
    }
    void dequeue(){
        if (isEmpty()){return;}
        front = (front+1)%cap;
        size--;
    }
};
