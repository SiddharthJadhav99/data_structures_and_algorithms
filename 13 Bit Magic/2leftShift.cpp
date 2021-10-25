#include <iostream>
using namespace std;
int main(){
    int x = 6;
    cout<<(x<<1)<<endl;
    cout<<(x<<2)<<endl;
    int y = 2;
    int z = x<<y;
    cout<<z<<endl;
    return 0;
    //left shift (x<<y) = x*2^y
}