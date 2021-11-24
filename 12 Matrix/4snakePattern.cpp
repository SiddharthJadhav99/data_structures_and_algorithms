#include <bits/stdc++.h>
using namespace std;
static int r = 2;
int c = 3;
void snakePattern(vector<vector<int>> arr){
    int r = arr.size();
    int c = arr[0].size();
    for(int i = 0; i < r; i++){
        if(i%2 == 0){
        for(int j = 0; j < c; j++){
            cout<<arr[i][j]<<" ";
        }
        }
        else{
            for(int j = c-1; j >= 0; j--){
                cout<<arr[i][j]<<" ";
            }
        }
        
    }
}

int main(){
    vector<vector<int>> arr = {{1,2},
                               {3,4},
                               {5,6}};
    snakePattern(arr);
    return 0;

}