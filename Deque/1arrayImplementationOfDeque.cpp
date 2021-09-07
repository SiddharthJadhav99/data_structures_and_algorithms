#include <iostream>
using namespace std;
struct Deque{
    int size;
    int *arr;
    int cap;
    Deque(int c){
        cap = c;
        size = 0;
        arr= new int[c];
    }
};