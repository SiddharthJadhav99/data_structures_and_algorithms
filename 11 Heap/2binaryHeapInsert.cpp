#include <iostream>
using namespace std;
class minheap{
    int *arr;
    int cap;
    int size;
    minheap(int x){
        cap = x;
        arr = new int(x);
        size  = 0;
    }
    int left(int i){
        return (2*i + 1);
    }
    int right(int i){
        return (2*i + 2);
    }
    int parent(int i){
        return (i-2)/2;
    }
    void insert(int x){
        size++;
        arr[size-1] = x;
        int i = size - 1;
        while(i != 0 && arr[parent(i)] > arr[i]){
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
};