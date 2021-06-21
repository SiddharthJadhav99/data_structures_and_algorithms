#include <iostream>
using namespace std;
int main(){
    int arr[] = {0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0};
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        if (arr[i] == 0){
            count0++;
        }
        else if(arr[i] == 1){
            count1++;
        }
        else if (arr[i] == 2){
            count2++;
        }
    }
    count1 += count0;
    count2 += count1;
    //cout<<count0<<count1<<count2;
    for (int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++){
        if(j < count0){
            cout<<0<<"\t";
        }
        else if(j < count1){
            cout<<1<<"\t";
        }
        else if (j < count2){
            cout<<2<<"\t";
        }
    }
    return 0;
}