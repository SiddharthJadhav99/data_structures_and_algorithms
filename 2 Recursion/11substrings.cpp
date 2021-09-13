#include <iostream>
#include <string>
using namespace std;

void substring(string str, string curr, int n){
    if (n == str.length()){
        cout<<curr<<" ";
        return;
    }
    else{
        substring(str, curr, n+1);
        substring(str, curr+str[n], n+1);
    }

}

int main(){
    string str = "abc";
    int n = 0;
    string curr = "";
    substring(str,curr,n);
    return 0;
}