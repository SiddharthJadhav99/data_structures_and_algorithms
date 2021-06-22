#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements ==> ";
    cin>>n;
    int arr[n];
    int rarr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    rarr[0] = arr[n-1];
    for (int j = 1; j < n; j++){
        rarr[j] = arr[j-1];
    }
    for(int k = 0; k < n; k++){
        cout<<rarr[k]<<"\t";
    }
    return 0;
}