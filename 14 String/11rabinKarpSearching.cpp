//It uses Hashing
#include <bits/stdc++.h>
using namespace std;
#define d 256
void RKSearch(string txt, string pat){
    int n = txt.length();
    int m = pat.length();
    int q = 101;
    int h = 1;
    for(int i = 0; i < m-1; i++){
        h = (h*d)%q;
    }
    int p = 0;
    int t = 0;
    for(int i = 0; i < m; i++){
        p = (p*d + pat[i])%q;
        t = (t*d + txt[i])%q;
    }
    for(int i = 0; i <= n-m; i++){
        if(p == t){
            bool flag = true;
            for(int j = 0; j < m; j++){
                if(txt[i+j] != pat[j]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout<<i<<" ";
            }
        }
        if(i < n-m){
            t = (d*(t-txt[i]*h) + txt[i+m])%q;
            if(t < 0){
                t = t+q;
            }
        }
    }
}
int main(){
    string txt = "AAAAA";
    string pat = "AAA";
    RKSearch(txt, pat);
    return 0;
}