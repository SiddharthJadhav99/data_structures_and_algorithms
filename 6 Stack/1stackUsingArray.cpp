#include <iostream>
using namespace std;
struct MyStack{
    int *arr;
    int cap;
    int top;

    MyStack(int c){
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    void push (int x){
        if (top == cap-1){
            cout<<"Overflow Condition!"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    int pop(){
        if (top == -1){
            cout<<"Underflow Condition!"<<endl;
            exit;
        }
        int res = arr[top];
        top--;
        return res;
    }

    int peek(){
        if (top == -1){
            cout<<"underflow Condition"<<endl;
            exit;
        }
        return arr[top];
    }

    int size(){
        return (top+1);
    }

    bool isEmpty(){
        return (top == -1);
    }

};

int main(){
    MyStack s(5);
    s.push(20);
    s.push(10);
    s.push(30);
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.size()<<endl;
    return 0;
}