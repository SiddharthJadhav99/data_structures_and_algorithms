#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m = 3;
    int n = 2;
    vector<vector<int>> arr;
    for (int i = 0; i < m; i++){
        vector<int> ins;
        for (int j = 0; j < n; j++){
            ins.push_back(10);
        }
        arr.push_back(ins);
    }
    for (int i = 0; i < m; i++){
        for (int  j = 0; j < n; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
