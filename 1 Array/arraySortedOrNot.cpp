#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int num;
    int flag = 1; 
    vector<int> arr;
    for (int i = 0; i < n; i++){
        cout<<"Enter the elements at index "<<i+1<<": ";
        cin>>num;
        arr.push_back(num);
    }
    cout<<endl;
    for (int i = 0; i < n-1; i++){
        if (arr[i] > arr[i+1]){
            flag = 0;
        }
    }
    if (flag == 0){
        cout<<"Not Sorted"<<endl;
    }
    else{
        cout<<"sorted"<<endl;
    }
    return 0;
}