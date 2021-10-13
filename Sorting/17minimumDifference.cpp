#include <bits/stdc++.h>

using namespace std;

//naive approach O(n^2)
int getMinimum(int arr[], int n){
    int res = INT_MAX;
    for(int i = 1; i < n; i++){
        for(int  j = 0; j < i; j++){
            res = min(res, abs(arr[i] - arr[j]));
        }
    }
    return res;
}

//optimized approach

int getMin(int arr[], int n){
    sort(arr, arr+n);
    int res = INT_MAX;
    for(int i = 0; i < n-1; i++){
        res = min(res, abs(arr[i]-arr[i+1]));
    }
    return res;

}


int main(){
    int arr[] = {5,3,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res  = getMin(arr, n);
    cout<<res<<endl;
    return 0;
}