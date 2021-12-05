#include <bits/stdc++.h>
using namespace std;
int effApproach(string str){
    int n = str.length();
    int first[256] = {-1};
    for(int i = 0; i < n; i++){
        if(first[str[i]] == -1){
            first[str[i]] = i;
        }
        else{
            first[str[i]] = -2;
        }
    }
    int res = INT_MAX;
    for(int i = 0; i < 256; i++){
        if(first[i] >= 0){
            res = min(res,first[i]);
        }
    }
    return (res == INT_MAX)? -1:res;
}
int betterApproach(string str){
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
int nonrepeating(string str){
    int n = str.length();
    for(int i = 0; i < n; i++){
        bool flag = true;
        for(int j = i+1; j< n; j++){
            if(str[i] == str[j]){
                flag = false;
                break;
            }
        }
        if(flag){
            return i;  
        }
    }
    return -1;
}
int main(){
    string str = "geeksforgeeks";
    int res = nonrepeating(str);
    cout<<res;
    return 0;
}