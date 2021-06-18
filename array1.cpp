#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n-1];
    cout<<"Enter the elements of the array "<<endl;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int start = 0;
    int last = n-1;
    
    while (start < last){
        int temp = arr[start];
        arr[start] = arr[last];
        arr[last] = temp;
        start = start + 1;
        last = last -1;
    }
    cout<<"reversed array : ";
    for (int j = 0; j < n; j++){
        cout<<arr[j];
        cout<<"\t";
    }
    return 0;
}