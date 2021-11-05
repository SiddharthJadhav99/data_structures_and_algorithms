#include <iostream>
using namespace std;
void frequency(int arr[], int n){
    for(int i = 0; i < n; i++){
        int count = 1;
        for(int j = i+1; j < n; j++){
            if(arr[i] != arr[j]){
                break;
            }
            count++;
            i++;
        }
        cout<<arr[i]<<" = "<<count<<endl;
    }
}
int main(){
    int arr[] = {40};
    int n = sizeof(arr)/sizeof(arr[0]);
    frequency(arr, n);
    return 0;
}