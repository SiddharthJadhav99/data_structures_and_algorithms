#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;
    cout<<"The pointer is pointing at "<<*ptr<<" Adress of the location is "<<ptr<<endl;
    ptr++;
    cout<<"The pointer is pointing at "<<*ptr<<" Adress of the location is "<<ptr<<endl;
    ptr--;
    cout<<"The pointer is pointing at "<<*ptr<<" Adress of the location is "<<ptr<<endl;
    ptr=ptr+3;
    cout<<"The pointer is pointing at "<<*ptr<<" Adress of the location is "<<ptr<<endl;
    ptr = ptr-2;
    cout<<"The pointer is pointing at "<<*ptr<<" Adress of the location is "<<ptr<<endl;
    return 0;
}
