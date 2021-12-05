#include <bits/stdc++.h>
using namespace std;
bool checkAnagram(string s1, string s2){
    int n = s1.length();
    int m = s2.length();
    int count[256] = {0};
    for(int i = 0; i < n; i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i = 0; i< 256; i++){
        if(count[i] != 0){
            return false;
        }
        else{
            return true;
        }
    }
    return false;
}
int main(){
    string s1 = "listen";
    string s2 = "silent";
    // if(s1.length() != s2.length()){
    //     cout<<"NOT Anagram"<<endl;
    // }
    // sort(s1.begin(), s1.end());
    // sort(s2.begin(), s2.end());
    // if(s1 == s2){
    //     cout<<"Anagram"<<endl;
    // }
    // else{
    //     cout<<"Not Anagram"<<endl;
    // }
    bool res = checkAnagram(s1, s2);
    if(res){cout<<"Anagram";}
    else{cout<<"not anagram";}
    return 0;
}