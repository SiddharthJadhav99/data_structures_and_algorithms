#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr = {1,45,67,3,4,6};
    sort(arr.begin(), arr.end());
    for (int x : arr){
        cout<<x<<"\t";
    }
    cout<<endl;
    sort(arr.begin(),arr.end(),greater<int>());
    for (int j : arr){
        cout<<j<<"\t";
    }
    return 0;
}