#include <iostream>
#include <deque>
using namespace std;
struct Myds{
    deque<int> dq;
    void insertMin(int x){
        dq.push_front(x);
    }
    void insertMax(int x){
        dq.push_back(x);
    }
    int getMin(){
        return dq.front();
    }
    int getMax(){
        return dq.back();
    }
    void extractMin(){
        dq.pop_front();
    }
    void extractMax(){
        dq.pop_back();
    }
};