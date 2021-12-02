#include <bits/stdc++.h>
using namespace std;
int longSub(int arr[], int n){
    unordered_map<int,int> m;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){arr[i] == -1;}
    }
    int pre_sum = 0;
    int res = 0;
    for(int i = 0; i < n; i++){
        pre_sum += arr[i];
        if(pre_sum == 0){
            res = i+1;
        }   
        if(m.find(pre_sum) == m.end()){
            m.insert({pre_sum, i});
        }
        if(m.find(pre_sum) != m.end()){
            res = max(res, i - m[pre_sum]);
        }
    }
}
int main(){
    int arr[] = {0,0,1,1,1,1,1,0};
    int n = 8;
    int res = 0;
    for(int i = 0; i < n; i++){
        int count1 = 0;
        int count0 = 0;
        int curr = 0;
        for(int j = i; j < n; j++){
            if(arr[j] == 0){count0++;}
            if(arr[j] == 1){count1++;}
            if(count1 == count0){
                curr = j-i+1;
                res = max(res,curr);
            }
        }
    }
    cout<<res;
    return 0;
}