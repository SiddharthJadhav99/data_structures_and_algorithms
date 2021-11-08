#include <iostream>
using namespace std;
int maxEvenOdd(int arr[], int n){
    int res = 1;
    int curr = 1;
    for(int i = 1; i < n; i++){
        if(arr[i]%2 == 0 && arr[i-1]%2 != 0){
            curr++;
        }
        else if(arr[i]%2 != 0 && arr[i-1]%2 == 0){
            curr++; 
        }
        else{
            curr = 1;
        }
        res = max(res, curr);
    }
    return res;
}
int main(){
    int arr[] = {10, 12, 14, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = maxEvenOdd(arr, n);
    int max_length = 1;
    for(int i = 1; i < n; i++){
        int count = 1;
        for(int j = i+1; j < n; j++){
            if(arr[j]%2 == 0 && arr[j-1]%2 != 0){
                count++;
            }
            else if(arr[j]%2 != 0 && arr[j-1]%2 == 0){
                count++;
            }
            else{
                break;
            }
        }
        max_length = max(max_length, count);
    }
    cout<<res;
    return 0;
}