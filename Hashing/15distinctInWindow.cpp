#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {10,20,20,10,30,40,10};
    int n = 7;
    int k;
    cin>>k;
    for(int i = 0; i < n-k+1; i++){
        unordered_set<int> s;
        for(int j = i; j < k; j++){
            s.insert(arr[j]);
        }
        cout<<s.size()<<" ";
        s.clear();
    }
    return 0;
}