#include <bits/stdc++.h>
using namespace std;
int effintersection(int a[], int b[], int n, int m){
    unordered_set<int> s;
    int res = 0;
    for(int i = 0; i < n; i++){
        s.insert(a[i]);
    }
    for(int i = 0; i < m; i++){
        if(s.find(b[i]) != s.end()){
            res++;
            s.erase(b[i]); // important
        }
    }
    return res;
}
int intersection(int a[], int b[], int n, int m){
    int count = 0;
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0; j < i; j++){
            if(a[i] == a[j]){
                flag = true;
                break;
            }
        }
        if(flag == true){
            continue;
        }
        for(int j = 0; j < m; j++){
            if(a[i] == b[j]){
                count++;
                break;
            }
        }
    }
    return count;
}
int main(){
    int a[] = {10,15,20,15,30,30,5};
    int b[] = {30,5,30,80};
    int n = 7;
    int m = 4;
    int res = intersection(a,b,n,m);
    cout<<res<<endl;
    return 0;
}