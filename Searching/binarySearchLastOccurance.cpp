#include <iostream>
#include <vector>
using namespace std;
int lastOccurance(vector<int> arr, int n, int low, int high){
    while(low<high){
        int mid = (low+high)/2;
        if(arr[mid] > n){
            high = mid-1;
        }
        else if(arr[mid] < n){
            low = mid+1;
        }
        else{
            if(arr[mid] != arr[mid+1]){
                return mid;
            }
            else{
                low = mid+1;
            }
        }
    }
    return -1;
    
}
int main(){
    int n;
    cout<<"Enter the number to be found: ";
    cin>>n;
    vector<int> arr = {1,2,3,4,5,6,7,8,8,8,8,9};
    int low = 0;
    int high = arr.size()-1;
    int index = lastOccurance(arr, n, low, high);
    cout<<index<<endl;
    return 0;
}