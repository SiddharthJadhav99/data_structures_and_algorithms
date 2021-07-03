#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout<<"Enter the number of elements :";
    cin>>n;
    cout<<"Elements of array :";
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    //sum of array elements
    for (int j = 0; j < n; j++){
        sum = sum + arr[j];
    }
    cout<<"Sum of array : ";
    cout<<sum;
    return 0;
}