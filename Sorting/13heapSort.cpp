#include <bits/stdc++.h>
using namespace std;
void maxheapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != i){
        swap(arr[i], arr[largest]);
        maxheapify(arr,n,largest);
    }
}
void buildheap(int arr[], int n){
    for(int i = (n-2)/2; i >= 0; i--){
        maxheapify(arr,n,i);
    }
}
void heapsort(int arr[], int n){
    buildheap(arr,n);
    for(int i = n-1; i >= 1; i--){
        swap(arr[0], arr[i]);
        maxheapify(arr,i,0);
    }
}
int main(){
    int arr[] = {10,15,50,4,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}