#include <iostream>
using namespace std;
int main(){
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int col = 3;
    int row = 3;
    int key = 6;
    int i = 0;
    int j = col-1;
    while(i < row && j >= 0){
        if(arr[i][j] == 0){
            cout<<i<<" "<<j<<endl;
            return;
        }
        else if(arr[i][j] > 0){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"Not Found!"<<endl;
    return 0;
}