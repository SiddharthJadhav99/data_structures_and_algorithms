#include <iostream>
using namespace std;
int countSet(int n){
    int res = 0;
    while(n > 0){
        if(n&1 == 1){
            res++;
        }
        n = n>>1;
    }
    return res;
}
int main(){
    int n = 5;
    int res = countSet(n);
    cout<<res;
    return 0;
}