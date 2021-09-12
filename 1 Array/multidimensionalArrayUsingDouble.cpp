#include <iostream>
using namespace std;
int main(){
    int m = 3, n = 2;
    int **ptr;
    ptr = new int* [m]; //dynamic memory alloted in heap
    for (int i = 0; i < m; i++){
        ptr[i] = new int [n]; //dynamic memory allotment
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            ptr[i][j] = 10;
            cout<<ptr[i][j]<<"\t";
        }
    }
}
