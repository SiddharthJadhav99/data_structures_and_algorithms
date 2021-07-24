#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr = {0,3,2,1};
    int temp;
    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr.size(); j++){
            if (arr[i] >= arr[j]){
                temp = arr[j];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}