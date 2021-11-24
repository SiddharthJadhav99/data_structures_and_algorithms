#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,1,0,0,0,1,1,1,0,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count_zero = 0;
    int count_one = 0;
    int i = 0;
    while(i < n){
    if(arr[i] == 0){
        while(arr[i] != 0){
            count_zero++;
        }
        
    }
    }
    
}