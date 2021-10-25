#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m = 3;
    int n = 2;
    vector<int> a[m];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            a[i].push_back(10);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
        }
    return 0;
}