#include <bits/stdc++.h>
using namespace std;
int longCommon(int arr[], int arr2[], int n){
    int temp[n];
    for(int i = 0; i < n; i++){
        temp[i] = arr[i] - arr2[i];
    }
    unordered_map<int,int> s;
    int pre_sum = 0;
    int res = 0;
    for(int i = 0; i < n; i++){
        pre_sum += arr[i];
        if(pre_sum == 0){
            res = i+1;
        }
        if(s.find(pre_sum) == s.end()){
            s.insert({pre_sum, i});
        }
        if(s.find(pre_sum) != s.end()){
            res = max(res, i - s[pre_sum]);
        }
    }
}
int main(){
    int arr[] = {0,1,0,0,0,0};
    int arr2[] = {1,0,1,0,0,1};
    int n = 6;
    int res = 0;
    for(int i = 0; i < n; i++){
        int curr  = 0;
        int curr2 = 0;
        for(int j = i; j < n; j++){
            curr += arr[j];
            curr2 += arr2[j];
            if(curr == curr2){
                res = max(res, j-i+1);
            }
        }
    }
    cout<<res;
    return 0;
}