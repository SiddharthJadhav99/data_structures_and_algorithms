#include <iostream>
#include <vector>
using namespace std;
void print(vector<vector<int>> arr){
    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr[i].size(); j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    int m = 5;
    int n = 2;
    vector<vector<int>> arr;
    for (int i = 0; i < m; i++){
        vector<int> t;
        for (int j = 0; j < n; j++){
            t.push_back(i);
        }
        arr.push_back(t);
    }
    print(arr);
}