#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
    int t = a;
    a = b;
    b = a;
}
int hoarePartition(vector<int> arr, int l, int h){
    int pivot = arr[l];
    int i = l-1;
    int j = h+1;
    while(true){
        do{
            i++;
        }while(arr[i] < pivot);
        do{
            j--;
        }while(arr[j] > pivot);
        if(i >= j){return j;}
        swap(arr[i], arr[j]);
    }
}
int main(){
    vector<int> arr = {5,3,8,4,2,7,1,10};
    int l = 0;
    int h = arr.size()-1;
    int pos = hoarePartition(arr,l,h);
    cout<<pos;
    return 0;
}