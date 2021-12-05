#include <bits/stdc++.h>
using namespace std;
bool subArraySum(int arr[], int n, int x){
    unordered_set<int> s;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
        if(s.find(abs(x-sum)) != s.end()){
            return true;
        }
        else if(sum == x){
            return true;
        }
        else{
            s.insert(sum);
        }
    }
    return false;
}
int main(){
    int arr[] = {2,8,6,13,3,-1};
    int n = 6;
    int x = 14;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum = sum + arr[j];
            if(sum == x){
                cout<<"Yes"<<endl;
                break;
            }
        }
    }
    return 0;
}