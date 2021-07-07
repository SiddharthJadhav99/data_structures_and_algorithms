#include <iostream>
using namespace std;
int main(){
    int n;
    float avg;
    cout<<"Enter the number of elements :";
    cin>>n;
    cout<<"Elements of array : ";
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    //largest in the array 
    int lar = arr[0];

    for (int i = 1; i < n; i++){
        if (lar < arr[i]){
            lar = arr[i];
        }
    }
    cout<<"The largest number is : ";
    cout<<lar;
    return 0;
}
