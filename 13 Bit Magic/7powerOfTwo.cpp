#include <iostream>
using namespace std;
void poweroftwo(int n){
    if(n == 0){
        cout<<false;
    }
    while(n != 1){
        if(n%2 != 0){
            cout<<false;
        }
        n = n/2;
    }
    cout<<true;
}
int main(){
    int n;
    cin>>n;
    poweroftwo(n);
    return 0;
}