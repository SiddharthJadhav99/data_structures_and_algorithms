#include <iostream>
#include <vector>
using namespace std;
void sorting (vector<int> arr, int start, int mid, int end){
    vector<int> left;
    vector<int> right;
    for (int i = start; i <= mid; i++){
        left.push_back(arr[i]);
    }
    for (int j = mid+1; j < end; j++){
        right.push_back(arr[j]);
    }
    int i = 0;
    int j = 0;
    int k = 0;
    int m = left.size();
    int n = right.size();
    while (i < m && j < n){
        if (left[i] <= right[j]){
            arr[k] = left[i];
            k++;
            i++;
        }
        else{
            arr[k] = right[j];
            k++;
            j++;
        }
    }
    while (i < m){
        arr.push_back(left[i]);
        i++;
    }
    while (j < n) {
        arr.push_back(right[j]);
        j++;
    }
    for (int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    vector<int> arr = {11,55,65,1,2,33,53,99};
    int start = 0;
    int mid = 2;
    int end = 7;
    sorting (arr, start, mid, end);
    return 0;
}