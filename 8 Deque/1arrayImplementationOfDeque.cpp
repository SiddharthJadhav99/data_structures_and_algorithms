#include <iostream>
using namespace std;
struct DQ{
    int size;
    int *arr;
    int cap;
    DQ(int c){
        cap = c;
        size = 0;
        arr= new int[c];
    }
    bool isEmpty(){
        if (size == 0){return true;}
    }
    bool isFull(){
        if(size == cap){return true;}
    }
    void insertFront(int x){
        if (isEmpty){
            arr[size] = x;
            size++;
        }
        if(isFull){return;}
        for(i = size-1; i >= 0; i--){
            arr[i+1] = arr[i];
        }
        arr[0] = x;
        size = size+1;
    }
    void deleteFront(){
        if(isEmpty){return;}
        for (i = 0; i < size-1; i++){
            arr[i] = arr[i+1];
        }
        size = size-1;
    }
    void insertRear(int x){
        if(isFull){return;}
        arr[size] = x;
        size++;
    }
    void deleteRear(){
        if(isEmpty){return;}
        size--;
    }
    int getFront(){
        if(isEmpty){
            return;
        }
        return arr[0];
    }
    int getRear(){
        if(isEmpty){return;}
        return arr[size-1]
    }


};