#include <iostream>
using namespace std;
int fibo(int n){
    if (n <= 1){
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int f = fibo(n);
    cout<<"Fibonacci Number at "<<n<<" = "<<f;
    return 0;
}