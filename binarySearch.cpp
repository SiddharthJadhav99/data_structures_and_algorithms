#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &arr, int n){
    for (int i = 0; i < arr.size(); i++){
        if(arr[i] == n){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    vector<int> arr = {1,2,4,6,7,9,10};
    cout<<"Enter the number to be searched : ";
    cin>>n;
    int index = binarySearch(arr, n);
    cout<<"The index at which the number is present is: "<<index;
    return 0;
}