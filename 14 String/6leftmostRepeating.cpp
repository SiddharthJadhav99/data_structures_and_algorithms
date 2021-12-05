#include <bits/stdc++.h>
using namespace std;
int moreeff(string str){
    int n = str.length();
    int findex[256] = {-1};
    int res = INT_MAX;
    for(int i = 0; i < n; i++){
        int fi = findex[str[i]];
        if(fi == -1){
            findex[str[i]]++;
        }
        else{
            res = min(res,fi);
        }
    }
    if(res == INT_MAX){
        return -1;
    }
    return res;
}
int effleftmost(string str){
    int n = str.length();
    int count[256] = {0};
    for(int i = 0; i < n; i++){
        count[str[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(count[str[i]] > 1){
            return i;
        }
    }
    return -1;
}
int leftmost(string str){
    int n = str.length();
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(str[i] == str[j]){
                return i;
            }
        }
    }
    return -1;
}
int main(){
    string str = "abbc";
    int res = leftmost(str);
    cout<<res;
    return 0;
}