#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements of array : ";
    cin>>n;
    vector<int> arr;
    int t;
    for(int i = 0; i < n; i++){
        cout<<"Enter the element at position "<<i+1<<": ";
        cin>>t;
        arr.push_back(t);
    }
   int end = 0;
   for (int i = 1; i < n; i++){
       if(arr[i] != arr[i-1]){
           end++;
           arr[end] = arr[i];
       }
   } 
   for (int i = 0; i <= end; i++){
       cout<<arr[i]<<"\t";
   }
    return 0;
}