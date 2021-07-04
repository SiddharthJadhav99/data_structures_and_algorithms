#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m = 2;
    vector<vector<int>> arr(m,vector<int>(m, 0));
    vector<vector<int>> ans(m,vector<int>(m, 0));

    cout<<"Enter the elements in an array ==> "<<endl;
    for (int i = 0; i < m; i++){
        vector<int> ins;
        for (int j = 0; j < m; j++){
            int k;
            cin>>arr[i][j];
        }
        arr.push_back(ins);
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    for (int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
           ans[i][j] = arr[j][i];
        }
    }

    cout<<"\n Transpose \n"<<endl;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            cout<<ans[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}