#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr, int n, int low, int high){
    if (low > high){
        return -1;
    }
    int mid = (high + low)/2;
    if (arr[mid] == n){
        return mid;
    }
    else if (arr[mid] > n){
        return binarySearch(arr, n, low, mid-1);
    }
    else{
        return binarySearch(arr, n, low+1, high);
    }

}
int main(){
    int n;
    cout<<"Enter the number to be found: ";
    cin>>n;
    vector<int> arr = {1,2,4,6,7,8,9,11};
    int index;
    int low = 0;
    int high = arr.size() - 1;
    index = binarySearch(arr, n, low, high);
    cout<<"The index is: "<<index;
    return 0;
}