#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {0,1,3,4,5,3,2,2};
    int n = 8;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<endl;
            }
        }
    }
    sort(arr,arr+n);
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[i+1]){
            cout<<arr[i]<<endl;
        }
    }
    bool check[20] = {false};
    for(int i = 0; i < n; i++){
        if(check[arr[i]]){
            cout<<arr[i];
        }
        check[arr[i]] = true;
    }
}