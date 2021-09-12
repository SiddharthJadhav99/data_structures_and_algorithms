#include <iostream>
using namespace std;
struct Pair{
    int max;
    int min;
};

struct Pair minmax(int arr[], int n){

    struct Pair minmaxv;

    if(n == 1){
        minmaxv.max = arr[0];
        minmaxv.min = arr[0];
        return minmaxv;
    }
    else if (n == 2){
        if (arr[0] > arr[1]){
            minmaxv.min = arr[1];
            minmaxv.max = arr[0];
            return minmaxv;
        }
        else if (arr[0] < arr[1]){
            minmaxv.min = arr[0];
            minmaxv.max = arr[1];
            return minmaxv;
        }
        else {
            minmaxv.min = minmaxv.max = arr[0];
            return minmaxv;
        }
    }

    else{
        minmaxv.min = minmaxv.max = arr[0];

        for (int i = 0; i < n; i++){
            if(arr[i] > minmaxv.max){
                minmaxv.max = arr[i];
            }
            if (arr[i] < minmaxv.min){
                minmaxv.min = arr[i];
            }
        }
        return minmaxv;
    }

}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    Pair a;
    a = minmax(arr,n);
    cout<<"Maximum --> "<<a.max<<endl;
    cout<<"Minimum --> "<<a.min<<endl;
    return 0;
}
