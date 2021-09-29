#include <iostream>
using namespace std;

int numberOfOne(int *arr, int n){
    int start = 0;
    int last = n-1;
    int mid = 0;
    int count = 0;
    int r = 0;
    while(start <= last){
        mid = (start + last) / 2;
        if(arr[mid] < 1){
            start = mid+1;
        }
        else{
            if(arr[mid] != arr[mid-1]){
                r = mid;
                break;
            }
            else{
                last = mid-1;
            }
        }
    }
    count = n-r;
    return count;
}
int main(){
    int n = 7;
    int arr[] = {0,0,0,0,1,1,1};
    int number = numberOfOne(arr,n);
    cout<<number;
    return 0;
}