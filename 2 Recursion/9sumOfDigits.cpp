#include<iostream>
using namespace std;

int sumOfDigits(int n){
    if (n < 10){
        return n;
    }
    else{
        return sumOfDigits(n/10)+n%10;
    }
}

int main(){
    int n = 1543;
    int res = sumOfDigits(n);
    cout<<res<<endl;
    return 0;
}