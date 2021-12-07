#include <bits/stdc++.h>
using namespace std;
int longpresuff(string str, int n){
    for(int len = n-1; len > 0; len--){
        bool flag = true;
        for(int i = 0; i < len; i++){
            if(str[i] != str[n-len+i]){
                flag = false;
            }
        }
        if(flag){
            return len;
        }
    }
    return 0;
}
void lpsarray(string str, vector<int> lps){
    for(int i = 0; i < str.length(); i++){
        lps.push_back(longpresuff(str,i+1));
    }
}
int main(){
    string str = "ababacab";
    vector<int> lps;
    lpsarray(str, lps);
    for(int i = 0; i < lps.size(); i++){
        cout<<lps[i]<<" ";
    }
    return 0;
}