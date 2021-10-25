#include <bits/stdc++.h>
using namespace std;
void kthBit(int n, int k){
    if((n>>(k-1)&1) == 1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main(){
    int n;
    int k;
    cin>>n>>k;
    kthBit(n,k);
    return 0;
}