#include <bits/stdc++.h>
using namespace std;
bool effCheck(string s1, string s2){
    return ((s1+s1).find(s2) != string::npos);
}
bool checkRotation(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    int n = s1.length();
    int i = 0;
    int j = 0;
    for(int i = 1; i < n; i++){
        string temp = "";
        int k = i;
        for(j = 0; j < n; j++){
            temp = temp + s1[k%n];
            k++;
        }
        if(temp == s2){
            return true;
        }
    }
    return false;
}
int main(){
    string s1 = "ABAB";
    string s2 = "ABBA";
    bool res = checkRotation(s1,s2);
    if(res){
        cout<<"Rotation"<<endl;
    }
    else{
        cout<<"Not Rotation"<<endl;
    }
    return 0;
}