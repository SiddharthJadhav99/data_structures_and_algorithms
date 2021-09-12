#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void unionArray(int *arr1, int *arr2, int len1, int len2){
    set<int> s;
    for (int i = 0; i < len1; i++){
        s.insert(arr1[i]);
    }
    for (int i = 0; i < len1; i++){
        s.insert(arr1[i]);
    }
    cout<<"The Union of both the arrays is ==> ";

}



void interArray(int *arr1, int *arr2, int len1, int len2){
    int count = 0;
    cout<<"The intersection of array ==> ";
    for (int i = 0; i < len1; i++){
        for (int j = 0; j < len2; j++){
            if (arr1[i] == arr2[j]){
                cout<<arr1[i]<<"\t"; 
            }
        }
    }
    //  cout<<"The Intersection of Array ==> ";
    // for (int j = 0; j < sizeof(arr3)/sizeof(arr3[0]); j++){
    //     cout<<arr3[j]<<"\t";
    //}
}
int main(){
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {4,5,6,7,8,9};
    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);
    interArray(arr1, arr2, len1, len2);
   return 0;
}
