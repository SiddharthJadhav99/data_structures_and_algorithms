#include <iostream>
using namespace std;
struct MyQueue{
    int *arr;
    int cap;
    int size;
    MyQueue(int x){
        arr = new int[x];
        size = 0;
        cap = x;
    }
    bool isEmpty(){
        return (size == 0);
    }
    bool isFull(){
        return (size == cap);
    }
    void enqueue(int x){
        if (isFull){
            cout<<"OverFlow Condition!"<<endl;
            return;
        }
        arr[size] = x;
        size++;
    }
    int dequeue(){
        if(isEmpty){return;}
        else{
            for (int i = 0; i < size-1; i++){
                arr[i] = arr[i+1];
            }
            size--;
        }
    }
    int getFront(){
        return arr[0];
    }
    int getRear(){
        return arr[size];
    }
    int size(){
        return size;
    }

};