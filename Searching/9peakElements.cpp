#include <bits/stdc++.h>
using namespace std;
void findPeak(int arr[], int n){
    int prev = arr[0];
    int curr = arr[1];
    if(prev > curr){
        cout<<prev<<" ";
    }
    for(int i = 1; i < n; i++){
        int next = arr[i];
        if(curr > next && curr > prev){
            cout<<curr<<" ";
        }
        prev = curr;
        curr = next;
    }
    if(arr[n-1] > arr[n-2]){
        cout<<arr[n-1]<<" ";
    }
}
int FindPeakBS(int arr[], int n){
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if((mid == 0 || arr[mid-1] <= arr[mid])&&(mid == n-1 && arr[mid+1] <= arr[mid])){
            return mid;
        }
        if(mid > 0 && arr[mid - 1] >= arr[mid]){
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {10,20,15,5,20,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    findPeak(arr, n);
    return 0;
}