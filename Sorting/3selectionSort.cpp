 #include <iostream>
#include <vector>
using namespace std;
void swap(int &a, int &b){
        int temp = a;
        b = a;
        b = temp;
}
void selectionSort(vector<int> &arr, int n){
    for (int i = 0; i < n; i++){
        int arr_min = i;
        for (int j = i+1; j < n; j++){
            if (arr[arr_min] > arr[j]){
                arr_min = j;
            }
        }
        swap(arr[arr_min], arr[i]);
    }
}
int main(){
    vector<int> arr = {12,4,6,7,8,32};
    int n = arr.size();
    selectionSort(arr,n);
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}