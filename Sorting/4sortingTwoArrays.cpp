#include <iostream>
#include <vector>
using namespace std;
void sortAndPrint(vector<int> arr1, vector<int> arr2, int m, int n){
    int i = 0; 
    int j = 0;
    while (i < m && i < n){
        if (arr1[i] <= arr2[j]){
            cout<<arr1[i]<<"\t";
            i++;
        }
        else {
            cout<<arr2[j]<<"\t";
            j++;
        }    
    }
    while (i < m){
        cout<<arr1[i]<<"\t";
        i++;
    }
    while (j < n){
        cout<<arr2[j]<<"\t";
        j++;
    }
}
int main(){
    vector<int> arr1 = {1,4,6,20};
    vector<int> arr2 = {5,7,9,22};
    int m = arr1.size();
    int n = arr2.size();
    sortAndPrint(arr1, arr2, m, n);
    return 0;
}