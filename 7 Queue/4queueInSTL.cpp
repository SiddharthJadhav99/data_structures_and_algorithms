#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    while (q.empty() != true){
        cout<<q.front()<<endl;
        cout<<q.back()<<endl;
        q.pop();
    }
    return 0;
}