#include <iostream>
using namespace std;

int countDistinct(int arr[], int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                flag = true;
            }
        }
        if(flag == false){
            res++;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int count = countDistinct(arr, n);
    cout<<count<<endl;
    return 0;
}