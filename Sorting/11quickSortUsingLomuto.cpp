#include <bits/stdc++.h>
using namespace std;

int lomutoPartition(int arr[], int l, int h){
    int pivot = arr[h];
    int i = l-1;
    for(int j = 0; j <= h; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i+1], arr[h]);
    return (i+1);
}

void qSort(int arr[], int  l, int h){
    if(l < h){
        int p = lomutoPartition(arr,l,h);
        qSort(arr, l, p-1);
        qSort(arr, p+1, h);
    }
}

int main(){
    int arr[]= {8,4,7,9,3,10,5};
    int l = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    int h = size - 1;
    qSort(arr, l, h);
    for(int i = 0; i < size; i ++){
        cout<<arr[i]<<" ";
    }
    return 0;
}