#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "GeeksForGeeks";
    int n = s.length();
    int count[52] = {0};
    for(int i = 0; i < n; i++){
        if(s[i] >= 65 && s[i] < 97){
            count[26+(s[i] - 'A')]++;
        }
        else{
            count[s[i] - 'a']++;
        }
    }
    for(int i = 0; i < 52; i++){
        if(i > 0 && i <= 26 && count[i] > 0){
            cout<<char(i + 'a')<<" "<<count[i]<<endl;
        }
        else if (count[i] > 0){
            cout<<char(i + 'A' - 26)<<" "<<count[i]<<endl;
        }
    }
    return 0;
}