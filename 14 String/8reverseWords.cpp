#include <bits/stdc++.h>
using namespace std;
void reverse(string &str, int i, int j){
    while(i <= j){
        swap(str[i], str[j]);
        i++;
        j--;
    }
}
void effreverse(string str){
    int i = 0;
    int n = str.length();
    for(int j = 0; j < n; j++){
        if(str[j] == ' '){
            reverse(str,i,j-1);
            i = j + 1;
        }
    }
    reverse(str, i, n-1);
    reverse(str,0,n-1);
    cout<<str;
}
void reverseWords(string &str){
    int n = str.length();
    string res = "";
    stack<string> s;
    int i = 0;
    while(i < n){
        string temp = "";
        while(str[i] != ' ' && i < n){
            temp = temp+str[i];
            i++;
        }
        s.push(temp);
        i++;
    }
    while(s.empty() != true){
        res = res + s.top() + " ";
        s.pop();
    }
    cout<<res;
}
int main(){
    string str = "Welcome to GFG";
    //reverseWords(str);
    effreverse(str);
    //cout<<str;
    return 0;
}