#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int arr[n];
    bool isDistinct;
    cout<<"Enter the array : ";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int count = 0;
    //number of ditinct elements in an array
    for (int j = 0; j < n; j++){
        isDistinct = true;
        for (int k = j-1; k >= 0; k--){
            if (arr[j] == arr[k]){
                isDistinct = false;
                break;
            }
        }
        if (isDistinct){
            count++;
        }
    }
    cout<<"The number of distinct elements are : ";
    cout<<count;
    return 0;
}
