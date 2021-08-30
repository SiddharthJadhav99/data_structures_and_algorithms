#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// struct MyStack{
//     vector<char> v;
//     void push(char x){
//         v.push_back(x);
//     }
//     char pop(){
//         char res = v.back();
//         v.pop_back();
//         return res;
//     }
//     char top(){
//         return v.back();
//     }
//     int size_s(){
//         return v.size();
//     }
//     bool isEmpty(){
//         return v.empty();
//     }
// };
bool matching (char temp, char par){
    if (temp == '(' && par == ')'){
        return true;
    }
    if (temp == '{' && par == '}'){
        return true;
    }
    if (temp == '[' && par == ']'){
        return true;
    }
    return false;
}
bool isBalanced(string par){
    stack<char> s;
    for (int i = 0; i < par.length(); i++){
        if (par[i] == '{' || par[i] == '(' || par[i] == '['){
            s.push(par[i]);
        }
        else{
            if (s.empty() == true){
                return false;
            }
            else if (matching(s.top(), par[i])){
                s.pop();
            }
            else{
                return false;
            }
        }
    }
    return s.empty() == true;
}
int main(){
    
    string par = "{}";
    bool res = isBalanced(par);
    if (res == true){ cout<<"It's Balanced"<<endl;}
    else {cout<<"Not Balanced "<<endl;}
    return 0;
}