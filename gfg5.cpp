#include <iostream>
using namespace std;
void fun(int arr[], int len){
    for (int i = 0; i < len; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    fun(arr, len);
    return 0;

}