#include <bits/stdc++.h>
using namespace std;
bool isPal(string str){
    int n = str.length();
    int i = 0;
    int j = n-1;
    while(i < j || i != j){
        if(str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string s = "ABBA";
    string rev = "";
    for(int i = s.length()-1; i >= 0; i--){
        rev = rev+s[i];
    }
    string revs;
    reverse(rev.begin(), rev.end());
    if(rev == s){
        cout<<"Palindrome!";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}