#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {100,200,300,400,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    int low = 0;
    int h = n-1;
    while(l <= h){
        int mid = (low + high)/2;
        if(arr[mid] == x){
            cout<<mid;
        }
        else if(arr[low] < arr[mid]){
            if(arr[low] <= x && x < arr[mid]){
                high = mid-1;
            } 
            else{
                low = mid+1;
            }
        }
        else{
            if(x > arr[mid] && x <= arr[high]){
            low = mid + 1;
            high = mid - 1;
            }
        }
    }
    cout<<-1;
    return 0;
}