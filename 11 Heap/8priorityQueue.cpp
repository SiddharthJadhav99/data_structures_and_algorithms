#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq_min;  
    pq.push(10);
    pq.push(5);
    pq.push(20);
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    while(pq.empty() == false){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}