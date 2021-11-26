#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] ={2,4,8,9,11,12,20,30};
    int n = 8;
    int x;
    cin>>x;
    int first = 0;
    int last = n-1;
    while(first < last){
        if(arr[first] + arr[last] == x){
            cout<<arr[first]<<" "<<arr[last]<<endl;
            first = first+1;
        }
        else if(arr[first] + arr[last] > x){
            last = last - 1;
        }
        else{
            first = first + 1;
        }
    }
    return 0;
}