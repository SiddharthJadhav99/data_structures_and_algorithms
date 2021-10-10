#include <iostream>
using namespace std;
int partition(int arr[], int l, int h){
    int pivot = arr[l];
    int i = l-1;
    int j = h+1;
    while(true){
        do{
            i++;
        }while(arr[i] < pivot);
        do{
            j--;
        }while(arr[j] > pivot);
        if(i >= j){
            return j;
        }
        swap(arr[i], arr[j]);
    }
}
void qsort(int arr[], int l, int h){
    if(l < h){
        int p = partition(arr,l,h);
        qsort(arr,l,p);
        qsort(arr,p+1,h);
    }

}
int main(){
    int arr[] = {8,4,7,9,3,10,5};
    int l = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    int h = size - 1;
    qsort(arr,l,h);
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}