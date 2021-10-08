#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> arr, int l, int m, int r){
    vector<int> left;
    vector<int> right;
    for(int i = l; i <= m; i++){
        left.push_back(arr[i]);
    }
    
    for(int j = m + 1; j < r; j++){
        right.push_back(arr[j]);
    }
    int i = 0;
    int j = 0;
    int k = 0;
    int size1 = left.size();
    int size2 = right.size();
    while(i < size1 && j < size2){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
            k++;
        }
        else{
            arr[k] = right[j];
            j++;
            k++;
        }
    }
    while(i < size1){
        arr.push_back(left[i]);
        i++;
    }
    while(j < size2){
        arr.push_back(right[j]);
        j++;
    }
}
void mergeSort(vector<int> arr, int l, int r){
    if (r > l){
        int m = (l + (r-l))/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1, r);
        merge(arr,l,m,r);
    }
}
int main(){
    vector<int> arr = {10,5,30,15,7};
    int r = arr.size();
    int l = 0;
    for(int i = 0; i < r; i++){
        cout<<arr[i]<<" ";
    }
    mergeSort(arr,l,r);
    for(int i = 0; i < r; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}