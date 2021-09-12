#include <iostream>
using namespace std;

int fun(int n){
    if (n == 1){
        return 0;
    }
    else{
        return 1+fun(n-1);
    }
}

//This program return the log of base 2

int main(){
    int res = fun(5);
    cout<<res<<endl;
    return 0;
}