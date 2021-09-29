#include <iostream>
#include <vector>
using namespace std;
int firstOccurance(vector<int> arr, int n, int low, int high){
    while(low <= high){
        int mid = (low+high)/2;
        if (arr[mid] > n){
            high = mid - 1;
        }
        else if (arr[mid] < n){
            low = low + 1;
        }
        else {
            if (mid == 0 || arr[mid - 1] != arr[mid]){
                return mid;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the number to be found: ";
    cin>>n;
    vector<int> arr = {2,2,2};
    int index;
    int low, high;
    low = 0;
    high = arr.size() - 1;
    index = firstOccurance(arr, n, low, high);
    cout<<"The first occurance is: "<<index;
    return 0;
}