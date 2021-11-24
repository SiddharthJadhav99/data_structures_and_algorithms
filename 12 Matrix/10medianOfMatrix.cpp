#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    r = 3;
    c = 3;
    int arr[r][c] = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<int> temp;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            int t = arr[i][j];
            temp.push_back(t);
        }
    }
    sort(temp.begin(), temp.end());
    int len = temp.size();
    int ans = temp[len/2];
    cout<<ans;
    return 0;
}