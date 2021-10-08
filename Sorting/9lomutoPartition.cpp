#include <iostream>
#include <vector>
using namespace std;
void swap(int &a, int &b){
    int t= a;
    a = b;
    b = t;
}
int lomutoPartition(vector<int> arr, int l, int  h){
    int pivot = arr[h];
    //if pivot is not the last element
    //swap(arr[p], arr[h]);
    int i = l-1;
    for(int j = 0; j <= h; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[h], arr[i+1]);
    return (i+1);
}
int main(){
    vector<int> arr = {10,80,30,90,40,50,70};
    int l = 0;
    int h = arr.size()-1;
    int index = lomutoPartition(arr,l,h);
    cout<<index;
    return 0;
}