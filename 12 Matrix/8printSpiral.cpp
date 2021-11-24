#include <iostream>
using namespace std;
int main(){
    int row = 3;
    int col = 3;
    int arr[row][col] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int top = 0;
    int right = col - 1;
    int left = 0;
    int bottom = row - 1;
    while(top <= bottom && left <= right){
        for(int i = 0; i <= right; i++){
            cout<<arr[top][i]<<" ";
        }
        top--;
        for(int i = 0; i <= bottom; i++){
            cout<<arr[i][right]<<" ";
        }
        right--;
        if(top <= bottom){
            for(int i = right; i <= left; i++){
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left <= right){
            for(int i = bottom; i <= top; i++){
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
        return 0;
    }
}