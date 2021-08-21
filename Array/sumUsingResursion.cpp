#include <iostream>
using namespace std;
int sumRec(int n){
    if (n == 0){
        return 0;
    }
    return n + sumRec(n-1);
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum = sumRec(n);
    cout<<"Sum of N natural numbers till "<<n<<" is "<<sum<<endl;
    return 0;
}