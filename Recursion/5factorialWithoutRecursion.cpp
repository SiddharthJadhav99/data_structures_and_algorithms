#include <iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for (int i = n; i >=1 ; i--){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int r = factorial(n);
    cout<<"The value of factorial is : "<<r<<endl;
    return 0;
}