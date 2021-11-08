#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,-2,3,-1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int now_high = arr[0];
    int alltime_high = arr[0];
    for(int i = 0; i < n; i++){
        if(now_high > 0){
            now_high += arr[i];
        }
        else{
            now_high = arr[i];
        }
        if(now_high > alltime_high){
            alltime_high = now_high;
        }
    }
    cout<<alltime_high;
    return 0;
}