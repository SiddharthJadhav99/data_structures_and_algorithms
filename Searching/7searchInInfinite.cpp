#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int h, int n){
    int prev_index = -1;
    while(l <= h){
        int mid = (l+h)/2;
        if(prev_index == mid){
            return -1;
        }
        prev_index = mid;
        if(arr[mid] == n){
            return mid;
        }
        else if(arr[mid] < n){
            l = mid+1;
        }
        else if(arr[mid] > n){
            h = mid-1;
        }
    }
    return -1;
}
int search(int arr[], int n){
    if(arr[0] == n){return 0;}
    int i = 1;
    while(arr[i] <= n){
         i = i*2;
    }
    if(arr[i] == n){
        return i;
    }
    else{
        return binarySearch(arr,i/2,i-1,n);
    }
}
int main(){
    int arr[] = {1,10,15,20,40,50,80,100,200,500};
    int x;
    cin>>x;
    // int i = 0;
    // while(true){
    //     if(arr[i] == x){
    //         cout<<i;
    //     }
    //     if(arr[i] > x){
    //         cout<<-1;
    //     }
    // }
    int index = search(arr,x);
    cout<<index;
    return 0;
}