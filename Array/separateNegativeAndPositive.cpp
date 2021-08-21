#include<iostream>
using namespace std;

void swap(int* arr, int* arr2){
    int temp = *arr;
    *arr = *arr2;
    *arr2 = temp;

}
void arrange(int *arr, int l){
    for (int i = 0; i < l; i++){
        for(int j = 0; j < l-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }

}
void displayArray(int *arr, int l){
    for (int i = 0; i < l; i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[] = {1,2,3,4,-4,-2,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    displayArray(arr, len);
    cout<<"\n";
    arrange(arr,len);
    displayArray(arr, len);
    return 0;
}
