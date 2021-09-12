#include <iostream>
#include <string>
using namespace std;
bool palindrome(string str, int start, int end){
    if (start >= end){
        return true;
    }
    return (str[start] == str[end])&&(palindrome(str, start+1, end-1));
}
int main(){
    string str;
    int len = str.length();
    cout<<"Enter the string: ";
    cin>>str;
    int start = str.at(0);
    int end = str.at(len-1);
    bool res = palindrome(str, start, end);
    if(res){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}