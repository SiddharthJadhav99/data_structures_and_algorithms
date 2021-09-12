#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    int start, end;
    start = 0;
    end = str.length()-1;
    while(start < end){
        if(str[start] != str[end]){
            cout<<"NOT"<<endl;
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    cout<<"Palindrome";
    return 0;
}
