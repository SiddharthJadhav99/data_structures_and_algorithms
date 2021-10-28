#include <iostream>
using namespace std;
int countSubsets(int arr[], int n, int sum){
    if(n == 0){
        return sum==0 ? 1:0;
    }
    return countSubsets(arr,n-1,sum)+countSubsets(arr,n-1,sum-arr[n-1]);
}
int main(){
    int arr[] = {10,20,15};
    int n = 3;
    int sum = 25;
    int num = countSubsets(arr,n,sum);
    cout<<num;
    return 0;
}