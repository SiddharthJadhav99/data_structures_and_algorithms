#include <bits/stdc++.h>
using namespace std;

void rotate90(vector<vector<int>> arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i = 0; i < n; i++){
            int low = 0;
            int high = n-1;
            while(low < high){
                swap(arr[low][i], arr[high][i]);
                low++;
                high--;
           }
        
    }
}
int main(){
    vector<vector<int>> arr = {{1,2,3}, {4,5,6}, {7,8,9}};
    int r = 3;
    int c = 3;
    int n = 3;
    int tmp[n][n];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            tmp[n-j-1][i] = arr[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout<<tmp[i][j]<<" ";
        }
        cout<<endl;
    }
}