#include <bits/stdc++.h>
using namespace std;
void printBoundry(vector<vector<int>> arr){
    int row = arr.size();
    int col = arr[0].size();
    if(row == 1){
        for(int i = 0; i < col; i++){
            cout<<arr[0][i]<<" ";
        }
    }
    if(col == 1){
        for(int i = 0; i < row; i++){
            cout<<arr[i][0]<<" ";
        }
    }
    else{
        for(int i = 0; i < col; i++){
            cout<<arr[0][i]<<" ";
        }
        for(int i = 1; i < row; i++){
            cout<<arr[i][2]<<" ";
        }
        for(int i = col-2; i > 0; i--){
            cout<<arr[2][i]<<" ";
        }
        for(int i = row-1; i > 0; i--){
            cout<<arr[i][0]<<" ";
        }
    }
}
int main(){
    vector<vector<int>> arr = {{1,2,3}, {4,5,6}, {7,8,9}};
    printBoundry(arr);
    return 0;
}