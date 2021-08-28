#include <iostream>
#include <vector>   
using namespace std;
int main(){
    vector<int> arr = { 3,3,4,5,5,8,8,66,76};
    int n = arr.size();
    int i = 0;
    int j = 0;
    while(i < n){
        if(arr[i] != arr[i+1]){
            arr[j] = arr[i];
            j++;
        }
        i++;
    }
    for(int i = 0; i < j; i++){
        cout << arr[i] << " ";
    }
    return 0;
}