#include <bits/stdc++.h>
using namespace std;
void moveToEnd(int arr[], int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            for(int j = i+1; j < n; j++){
                if(arr[j] != 0){
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
}
//efficient method
void moveEnd(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main(){
    int arr[] = {10,5,0,0,8,0,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    moveToEnd(arr,n);
    return 0;
}