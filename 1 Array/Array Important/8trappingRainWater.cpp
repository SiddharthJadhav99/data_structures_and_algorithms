#include <bits/stdc++.h>
using namespace std;
int getWater(int arr[], int n){
    int sum = 0;
    for(int i = 1; i < n-1; i++){
        int lmax = arr[i];
        for(int j = 0; j < i; j++){
            lmax = max(lmax, arr[j]);
        }
        int rmax = arr[i];
        for(int j = i+1; j < n; j++){
            rmax = max(rmax, arr[j]);
        }
        sum = sum + min(lmax, rmax) - arr[i];

    }
    return sum;
}

//efficient solution

int getWaterEff(int arr[], int n){
    int res = 0;
    int lmax[n];
    int rmax[n];
    lmax[0] = arr[0];
    for(int i = 1; i < n; i++){
        lmax[i] = max(arr[i], lmax[i-1]);
    }
    rmax[n-1] = arr[n-1];
    for(int i = n-1; i >= 0; i--){
        rmax[i] = max(arr[i], rmax[i+1]);
    }
    for(int i = 1; i < n-1; i++){
        res = res + (min(lmax[i], rmax[i]) - arr[i]);
    }
    return res;
}

int main(){
    int arr[] = {3,0,1,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = getWater(arr,n);
    cout<<res<<endl;
    // int copyarr[n];
    // for(int i = 0; i < n; i++){
    //     copyarr[i] = arr[i];
    // }
    // sort(copyarr, copyarr+n);
    // int c = copyarr[n-2];
    // int ans = 0;
    // for(int i = 0; i < n-2; i++){
    //     int r = copyarr[i];
    //     while(r != c){
    //         r++;
    //         ans++;
    //     }
    // }
    // cout<<ans<<endl;
    return 0;
}