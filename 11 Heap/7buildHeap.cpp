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
    void minHeapify(int i){
        int lt = left(i);
        int rt = right(i);
        int smallest = i;
        if(arr[i] > arr[lt]){
            smallest = lt;
        }
        if(arr[rt] < arr[smallest]){
            smallest = rt;
        }
        if(smallest != i){
            swap(arr[i], arr[smallest]);
            minHeapify(smallest);
        }
    }
    int extractMin(){
        if(size == 0){
            return INT_MAX;
        }
        if(size == 1){
            size--;
            return arr[0];
        }
        int min = arr[0];
        swap(arr[0], arr[size-1]);
        size--;
        minHeapify(arr[size-1]);
        return min;
    }
    void decreaseKey(int i, int x){
        arr[i] = x;
        while(i != 0 && arr[i] < arr[parent(i)]){
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
    void deleteKey(int i){
        decreaseKey(i, INT_MIN);
        int r = extractMin();
    }
    void buildheap(){
        for(int i = (size-2)/2; i>= 0; i--){
            minHeapify(i);
        }
    }
};