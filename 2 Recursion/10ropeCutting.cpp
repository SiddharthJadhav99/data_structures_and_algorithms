#include <iostream>
#include <math.h>
using namespace std;

int maxCuts(int n, int a, int b, int c){
    if (n == 0){
        return 0;
    }
    if (n < 0){
        return -1;
    }
    int res = max(maxCuts(n-a, a, b, c), maxCuts(n-b, a, b, c), maxCuts(n-c, a, b, c));
    if(res == -1){
        return -1;
    }
    return res+1;
}

int main(){
    int n = 5;
    int a = 2;
    int b = 1;
    int c = 5;
    int res2 = maxCuts(n, a, b, c);
    cout<<res2<<endl;
    return 0;
}