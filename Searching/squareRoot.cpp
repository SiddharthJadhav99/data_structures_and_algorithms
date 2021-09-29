#include <iostream>
using namespace std;

int squareRoot(int n){
    int i = 0; 
    while(i*i <= n){
        i++;
    }
    return (i-1);
}

//efficient square root

int squareRootEfficient(int n){
    int low = 1;
    int high = n;
    int ans = -1;
    while(low < high){
        int mid = (low+high)/2;
        int sqrt = mid*mid;
        if(sqrt == n){
            return n;
        }
        else if(sqrt > n){
            high = mid-1;
        }
        else{
            low = mid+1;
            ans = mid;
        }
    }
    return ans; 
}

int main(){
    int n;
    cin>>n;
    int sq = squareRoot(n);
    cout<<sq;
    return 0;
}