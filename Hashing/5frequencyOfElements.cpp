#include <iostream>
#include <unordered_map>
using namespace std;

void frequencyOfArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        int freq = 1;
        bool flag = true;
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                flag = false;
                break;
            }
        }
        if(flag == false){
            continue;
        }
        for(int k = i+1; k < n; k++){
            if(arr[i] == arr[k]){
                freq++;
            }
        }
        cout<<arr[i]<<"  "<<freq<<endl;
    }
}

//efficient method

void frequencyOfElementsHM(int arr[], int n){
    unordered_map<int,int> s;
    for(int i = 0; i < n; i++){
        s[i]++;
    }
    for(auto x : s){
        cout<<x.first<<" "<<x.second;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    frequencyOfArray(arr, n);
    return 0;
}