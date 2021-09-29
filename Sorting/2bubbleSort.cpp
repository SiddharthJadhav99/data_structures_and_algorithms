#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int> &arr, int n){
    bool swapped = false;
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if (swapped == false){
            break;
        }
    }
}
int main(){
    vector<int> arr = {10,8,20,25};
    int n = arr.size();
    bubbleSort(arr,n);
    cout<<"<===Sorted Array===>"<<endl;
    for (int x : arr){
        cout<<x<<"\t";
    }
    return 0;
}