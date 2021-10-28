#include <iostream>
using namespace std;
int maximumDiff(int arr[], int n){
    int max_diff = 0;
    for(int i = 0; i < n; i++){
        int curr_diff = arr[i+1] - arr[i];
        for(int j = i+2; j < n; j++){
            if(arr[j] - arr[i] > curr_diff){
                curr_diff = arr[j] - arr[i];
            }
        }
        if(curr_diff > max_diff){
            max_diff = curr_diff;
        }
    }
    return max_diff;
}
//efficient solution
int maxDiff(int arr[], int n){
    int res = arr[1]-arr[0];
    int minVal = arr[0];
    for(int j = 1; j < n; j++){
        res = max(res, arr[j]-minVal);
        minVal = min(arr[j], minVal);
    }
    return res;
}
int main(){
    int arr[] = {2,3,10,6,4,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = maximumDiff(arr, n);
    cout<<res;
    return 0;
}