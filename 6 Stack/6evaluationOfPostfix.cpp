#include <iostream>
#include <vector>
using namespace std;

struct MyStack{
    vector<int> s;
    void push(int x){
        s.push_back(x);
    }
    int pop(){
        int res = s.back();
        s.pop_back();
        return res;
    }
    int top(){
        return s.back();
    }
    int size_s(){
        return s.size();

    }
    bool isEmpty(){
        return (s.empty() == true);
    }

};

int evaluatePostfix(string s){
    MyStack st;
    for (int i = 0; i < s.length(); i++){
        if (isdigit(s[i])){
            int num = s[i];
            st.push(num - '0');
        }
        else{
            int op1 = st.pop();
            int op2 = st.pop();
            switch(s[i]){
                case '+': st.push(op2+op1); break;
                case '-': st.push(op2-op1); break;
                case '*': st.push(op2*op1); break;
                case '/': st.push(op2/op1); break;
            }
        }
    }
    return st.pop();
}
int main(){
    string s;
    cin>>s;
    int res = evaluatePostfix(s);
    cout<<res;
    return 0;
}
