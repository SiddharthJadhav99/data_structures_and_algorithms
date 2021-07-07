#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n=2;
    vector<vector<int>> arr1(n, vector<int>(n, 0));
    vector<vector<int>> arr2(n, vector<int>(n, 0));
    vector<vector<int>> res(n, vector<int>(n, 0));
    cout<<"Enter the values of first array : "<<endl;
    for (int  i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int t;
            cin>>t;
            arr1[i][j] = t;
        }
    }
    cout<<endl;
    cout<<"Enter the values of second array : "<<endl;
    for (int  i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int t;
            cin>>t;
            arr2[i][j] = t;
        }
    }
    cout<<endl;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            res[i][j] = 0;
            for (int k = 0; k < n; k++){
                res[i][j] = res[i][j] + (arr1[i][k]*arr2[k][j]);
            }
        }
    }

    for (int  i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<res[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
