#include <bits/stdc++.h>
using namespace std;
bool subZero(int arr[], int n){
    unordered_set<int> s;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
        if(s.find(sum) != s.end()){
            return true;
        }
        else if(sum == 0){
            return true;
        }
        else{
            s.insert(sum);
        }
    }
    return false;
}
int main(){
    int arr[] = {3,4,-3,-1,1};
    int n = 5;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum = sum+arr[i];
            if(sum == 0){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}