#include <bits/stdc++.h>
using namespace std;
bool findPair(int arr[], int n, int sum){
    unordered_set<int> s;
    for(int i = 0; i < n; i++){
        if(s.find(sum-arr[i]) != s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}
int main(){
    int arr[] = {3,2,8,15,-8};
    int n = 5;
    int sum = 17;
    bool flag = false;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] == sum){
                flag = true;
                break;
            }
        }
        if(flag){break;}
    }
    if(flag){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}