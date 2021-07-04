#include <iostream>
using namespace std;
int main(){
    int m = 3;
    int n =2;
    int *ptr[m]; //static memory allocation - stored in stack
    for (int i = 0; i < m; i++){
        ptr[i] = new int [n]; //dynamic memory allocation - stored in heap
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            ptr[i][j] = 10;
            cout<<ptr[i][j]<<"\t";
        }
        cout<<endl;
    }
}