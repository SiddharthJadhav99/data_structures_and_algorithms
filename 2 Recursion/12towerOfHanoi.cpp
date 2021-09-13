#include <iostream>
using namespace std;

void TOH(int n, char a, char b, char c){
    if (n == 1){
        cout<<"Move 1 from "<<a<<" to "<<c<<endl;
        return;
    }
    TOH(n-1, a, c, b);
    cout<<"Move "<<n<<" from "<<a<<" to "<<c<<endl;
    TOH(n-1,b,a,c);
}

int main(){
    char a = 'A',b = 'B',c = 'C';
    TOH(3, a, b, c);
    return 0;
}