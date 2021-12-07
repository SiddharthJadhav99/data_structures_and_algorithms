#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string txt, string pat, int i){
    int count[256] = {0};
    for(int j = 0; j < pat.length(); j++){
        count[pat[j]]++;
        count[txt[i+j]]--;
    }
    for(int j = 0; j < 256; j++){
        if(count[j] > 0){
            return false;
        }
    }
    return true;
}
bool isPresent(string txt, string pat){
    int n = txt.length();
    int m = pat.length();
    for(int i = 0; i <= n-m; i++){
        if(isAnagram(txt, pat, i)){
            return true;
        }
    }
    return false;
}
int main(){
    string txt = "geeksforgeeks";
    string pat = "frog";
    bool res = isPresent(txt, pat);
    if(res){
        cout<<"Anagram Present!";
    }
    else{
        cout<<"Anagram NOT Present";
    }
    return 0;
}