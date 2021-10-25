#include <iostream>
using namespace std;
int countBits(int n){
    int res = 0;
    while(n > 0){
        n = (n&(n-1));
        res++;
    }
    return res;
}
int main(){
    int n;
    n = 5;
    int res = countBits(n);
    cout<<res;
    return 0;
}