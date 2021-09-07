#include <iostream>
using namespace std;
struct DQ{
    int *arr;
    int size;
    int cap;
    int front;
    DQ(int c){
        cap = c;
        size = 0;
        front = 0;
    }
    bool isEmpty(){
        if(size == 0){return true;}
    }
    bool isFull(){
        if (size == cap-1){return true;}
    }
    void deleteFront(){
        if (isEmpty()){return;}
        front = (front+1)%cap;
        size--;
    }
    void insertRear(int x){
        if (isFull()){return;}
        int new_rear = (front+size)%cap;
        arr[new_rear] = x;
        size++;
    }
    int getFront(){
        if (isEmpty()){return;}
        return front;
    }
    void insertFront(int x){
        if(isFull()){
            return;
        }
        front = (front+cap-1)%cap;
        arr[front] = x;
        size++;
    }
    void deleteRear(){
        if(isEmpty){return;}
        size--;
    }
};