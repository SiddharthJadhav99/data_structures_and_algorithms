#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements of array: ";
    cin>>n;
    int r;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        cout<<"Enter the elements at index "<<i+1<<": ";
        cin>>r;
        arr.push_back(r);
    }
    int lar = arr[0];
    int seclar = -1;
    for(int i = 0; i < n; i++){
        if (arr[i] > lar){
            seclar = lar;
            lar = arr[i];
        }
    }
    if(seclar = -1){
        cout<<"No second largest found "<<endl;
        return 0;
    }
    cout<<"Second Largest : "<<seclar<<endl;
    return 0;
}