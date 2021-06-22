#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int k;
    cout<<"Enter the Number ==> ";
    cin>>k;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        if (arr[i] >= k){
            arr[i] = arr[i] - k;
        }
        else{
            arr[i] = arr[i] + k;
        }
    }
    for(int j = 0; j < n; j++){
        cout<<arr[j];
        cout<<"\t";
    }
    return 0;
}