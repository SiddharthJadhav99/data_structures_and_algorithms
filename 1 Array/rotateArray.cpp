#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    vector<int> arr;
    int t;
    cout<<endl;
    for (int i = 0; i < n; i++){
        cout<<"Enter the element at position "<<i+1<<": ";
        cin>>t;
        arr.push_back(t);
    }
    cout<<endl;
    int temp = arr[0];
    for (int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<"\t";
    }

}