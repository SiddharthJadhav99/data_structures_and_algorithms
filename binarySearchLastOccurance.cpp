#include <iostream>
#include <vector>
using namespace std;
int lastOccurance(vector<int> arr, int n, int low, int high){
    
}
int main(){
    int n;
    cout<<"Enter the number to be found: ";
    cin>>n;
    vector<int> arr = {1,2,3,4,5,6,7,8,8,8,8,9};
    int low = 0;
    int high = arr.size()-1;
    int index = lastOccurance(arr, n, low, high);
}