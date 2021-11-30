#include <bits/stdc++.h>
using namespace std;
void frequncy(int arr[], int n){
    unordered_map<int,int> s;
    for(int i = 0; i < n; i++){
        s[arr[i]]++;
    }
    for(auto x : s){
        cout<<x.first<<" "<<x.second<<endl;
    }
}
int main(){
    int arr[] = {10,12,10,15,10,20,12,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        bool flag = true;
        int count = 1;
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                flag = false;
            }
        }
        if(flag == false){
            continue;
        }
        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        cout<<arr[i]<<" "<<count<<endl;
    }
    return 0;
}