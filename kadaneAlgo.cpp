//Kadane's Algorithm

#include <iostream>
using namespace std;

int main(){
    int arr[] = {4,3,-2,6,-14,7,-1,4,5,7,-10,2,9,-10,-5,-9,6,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int now_high = arr[0];
    int alltime_high = arr[0];
    for (int i = 0; i < len; i++){
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
    cout<<"The maximum sum of any subarray is ==> ";
    cout<<alltime_high;
    return 0;
}
