#include <iostream>
using namespace std;
//efficient method
int findMajority(int arr[], int n){
    int res = 0;
    int count = 1;
    for(int  i = 0; i < n; i++){
        if(arr[res] == arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count == 0){
            count = 1;
            res = i;
        }
    }
    count = 0; 
    for(int i =0; i < n; i++){
        if(arr[res] == arr[i]){
            count++;
        }
        if(count <= n/2){
            res = -1;
        }
    }
    return res;
}
int main(){
    int arr[] = {8,3,4,8,8};
    int n = 5;
    for(int i = 0; i < n; i++){
        int check = arr[i];
        int count = 1;
        for(int j = i+1; j < n; j++){
            if(arr[j] == check){
                count++;
            }
        }
        if(count > n/2){
            return i;
        }
    }
    return -1;
}