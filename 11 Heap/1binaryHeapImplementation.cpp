#include <iostream>
using namespace std;
class minHeap{
    int *arr;
    int size;
    int cap;
    minHeap(int c){
        arr = new int[c];
        cap = c;
        size = 0;
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

};