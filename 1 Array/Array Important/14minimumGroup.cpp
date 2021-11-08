#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,1,0,0,0,1,1,1,0,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count_zero = 0;
    int count_one = 0;
    int store = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] == store){
            count_zero++;
        }
        else{
            count_one++;
        }
    }
}