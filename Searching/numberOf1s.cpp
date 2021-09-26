#include <iostream>
using namespace std;

int numberOfOne(int *arr, int n){
    int start = 0;
    int last = n-1;
    int mid = 0;
    while(start <= last){
        mid = (start + last) / 2;
        if(arr[mid] == 1){
            last = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return start;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int number = numberOfOne(arr,n);
    cout<<number;
    return 0;
}