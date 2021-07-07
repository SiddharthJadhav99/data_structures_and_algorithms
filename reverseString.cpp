#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    cout<<"The reverse string is : ";
    for (int i = (str.length()-1); i >= 0; i--){
        cout<<str[i];
    }
    return 0;
}
