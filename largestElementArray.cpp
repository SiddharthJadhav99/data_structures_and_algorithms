#include <iostream>
#include <vector>
using namespace std;
void printArray(vector<int> arr){
    for (int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
int largestElement(vector<int> arr){
    int largest = arr[0];
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int r;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        cout<<"Enter the element of array at position "<<i+1<<": ";
        cin>>r;
        arr.push_back(r);
    }
    printArray(arr);
    int lar = largestElement(arr);
    cout<<"Largest Element is ==> "<<lar<<endl;
    return 0; 
}