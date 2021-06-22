#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < len){
        j++;
        k = arr[i];
        i = i + k;
    }
    cout<<"Number of loops required ==> ";
    cout<<j;
}