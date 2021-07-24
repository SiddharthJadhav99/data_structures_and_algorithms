#include <iostream>
#include <vector>
int *arrayAscending(int *arr, int size){
    std::vector<int> vec(arr, arr + size);
    std::sort(vec.begin(), vec.end());
    for(int i = 0; i < size; i++){
        arr[i] = vec[i];
    }
}
using namespace std;
int main(){
    vector<int> arr = { 1,5,4,3,2 };
    int size = arr.size();
    arrayAscending(arr, size);
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}