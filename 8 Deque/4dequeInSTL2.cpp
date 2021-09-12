#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> dq = {10,25,12,34};
    auto it = dq.begin();
    it++;
    dq.insert(it,20);
    dq.pop_back();
    dq.pop_front();
    cout<<dq.size()<<endl;
    return 0;
}