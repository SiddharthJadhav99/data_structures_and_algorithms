#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {5,13,6,9,11,8};
    vector<int> res;
    int l = 0;
    int h = arr.size();
    printArray(arr);
    int p;
    cin>>p;
    for(int i = 0; i < h; i++){
        if(arr[i] < arr[p]){
            res.push_back(arr[i]);
        }
    }
    for(int j = 0; j < h; j++){
        if(arr[j] == arr[p]){
            res.push_back(arr[j]);
        }
    }
    for(int k = 0; k < h; k++){
        if(arr[k] > arr[p]){
            res.push_back(arr[k]);
        }
    }
    printArray(res);
    return 0;
}