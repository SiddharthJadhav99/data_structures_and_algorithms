#include <iostream>
using namespace std;
void leftRotate(int arr[], int n, int d){
    int temp[d];
    for(int i = 0; i < d; i++){
        temp[i] = arr[i];
    }
    for(int i = d; i < n; i++){
        arr[i-d] = arr[i];
    }
    for(int i = 0; i < d; i++){
        arr[n-d+i] = temp[i]; 
    }
}
//efficient 
void eLeftRotate(int arr[], int n, int d){
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}
void reverse(int arr[], int low, int high){
    while(low < high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int d = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    leftRotate(arr,n,d);
    return 0;
}