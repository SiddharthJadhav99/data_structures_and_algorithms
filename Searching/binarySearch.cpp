#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &arr, int n, int low, int high){
    while(low <= high){
        int mid = (low + high)/2;
        if (arr[mid] == n){
            return mid;
        }
        else if (arr[mid] > n){
           high = mid-1;
        }
        else if(arr[mid] < n){
            low = mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    vector<int> arr = {1,2,4,6,7,9,10};
    cout<<"Enter the number to be searched : ";
    cin>>n;
    int low = 0;
    int high = arr.size()-1;
    int index = binarySearch(arr, n, low, high);
    cout<<"The index at which the number is present is: "<<index;
    return 0;
}