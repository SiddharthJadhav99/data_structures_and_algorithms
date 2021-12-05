#include <bits/stdc++.h>
using namespace std;
int main(){
    string txt = "AAAAA";
    string pat = "AAA";
    int n = txt.length();
    int m = pat.length();
    for(int i = 0; i < n-m; i++){
        int j = 0;
        for(j = 0; j < m; j++){
            if(pat[j] != txt[j]){
                break;
            }
        }
        if(m == j){
            cout<<i<<" ";
        }
    }
    return 0;
}