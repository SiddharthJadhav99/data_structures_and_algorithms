#include <bits/stdc++.h>
using namespace std;
bool checkSubSeq(string s1, string s2, int size1, int size2){
    if(size2 == 0){
        return true;
    }
    if(size1 == 0){
        return false;
    }
    if(s1[size1 - 1] == s2[size2 - 1]){
        return checkSubSeq(s1,s2,size1-1, size2-1);
    }
    else{
        return checkSubSeq(s1, s2, size1-1, size2);
    }
}
bool checkSubsequence(string s1, string s2, int size1, int size2){
    int i = 0;
    int j = 0;
    while(i < size1 && j < size2){
        if(s1[i] == s2[j]){
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    return (j == size2);
}
int main(){
    string s1 = "geeksforgeeks";
    string s2 = "grges";
    int size1 = s1.length();
    int size2 = s2.length();
    bool res = checkSubsequence(s1, s2, size1, size2);
    if(res){cout<<"Subsequence!";}
    else{cout<<"Not a subsequence";}
    return 0;
}