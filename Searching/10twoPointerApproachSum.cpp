#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,5,9,2,8,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] == x){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}