#include <iostream>
using namespace std;
int maxCircularArray(int arr[], int n){
    int res = arr[0];
    for(int i = 0; i < n; i++){
        int curr_sum = arr[i];
        int max_sum = arr[i];
        for(int j = 1; j < n; j++){
            int index = (i+j)%n;
            curr_sum += arr[index];
            max_sum = max(max_sum, curr_sum);
        }
        res = max(max_sum, res);
    }
    return res;
}
//efficient method using kadane's algo
int NormalMaxSum(int arr[], int n){
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
    return alltime_high;
}
int circularMaxSum(int arr[], int n){
    int max_normal = NormalMaxSum(arr,n);
    if(max_normal < 0){
        return max_normal;
    }
    int arr_sum = 0;
    for(int i = 0; i < n; i++){
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular = arr_sum + NormalMaxSum(arr,n);
    return max_circular;
}

//main 

int main(){
    int arr[] = {5, -2, 3, 4};
    int n = 4;
    int res = maxCircularArray(arr, n);
    cout<<res;
    return 0;
}