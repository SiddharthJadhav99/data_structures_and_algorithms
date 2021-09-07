#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 1; i <= n/2+1; i++){
        int k = i;
        for (int j = 1 ; j <= i; j++){
            cout<<k<<" ";
            k++; 
        }
        cout<<endl;
    }
    int k = n;
    for (int i = n/2; i >= 1; i--){
        
        for (int j = i; j <= k; j++){
           cout<<j<<" ";
            k--;
        }
        cout<<endl;
    }
}