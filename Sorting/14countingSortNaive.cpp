#include <iostream>
using namespace std;
void countingSort(int arr[], int n, int k){
    int count[k];
    for(int i = 0; i < k; i++){
        count[i] = 0;
    }
    for(int i = 0; i < n; i++){
        count[arr[i]]++;
    }
    int index = 0;
    for(int i = 0; i < k; i++){
        for(int j = 0; j < count[i]; j++){
            arr[index] = i;
            index++;
        }
    }
}
int main(){
    int arr[] = {1,4,4,1,0,1};
    int k = 5;
    int n = sizeof(arr)/sizeof(arr[0]);
    countingSort(arr,n, k);
}