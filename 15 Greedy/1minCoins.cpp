#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {10,5,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n;
    cin>>n;
    int coins = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] <= n){
            int c = floor(n/arr[i]);
            coins = coins + c;
            n = n - c*arr[i];
        }
        if(n == 0){
            break;
        }
    }
    cout<<coins<<endl;

}