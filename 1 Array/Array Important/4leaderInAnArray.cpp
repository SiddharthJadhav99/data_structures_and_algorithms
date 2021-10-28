#include <iostream>
using namespace std;
void leadersInArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        int flag = 1;
        for(int j = i+1; j < n; j++){
            if(arr[j] >= arr[i]){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            cout<<arr[i]<<" ";
        }
    }
}
//efficient method
void leader(int arr[], int n){
    int curr_lead = arr[n-1];
    cout<<curr_lead<<" ";
    for(int i = n-2; i >= 0; i--){
        if(arr[i] > curr_lead){
            curr_lead = arr[i];
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int arr[] = {7, 10, 4, 3, 6, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    leader(arr, n);
    return 0;
}