#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int n){
    for(int i = 0; i < n; i++){
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main(){
    vector<int> arr = {12,4,6,7,8,32};
    int n = arr.size();
    insertionSort(arr,n);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}