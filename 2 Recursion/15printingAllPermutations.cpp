#include <iostream>
using namespace std;
void permute(string a, int i = 0){
    if(i == a.length()-1){
        cout<<a<<" ";
        return;
    }
    for(int j = 0; j < a.length(); j++){
        swap(a[i],a[j]);
        permute(a,i+1);
        swap(a[i],a[j]);
    }
}
int main(){
    string a = "abcd";
    int i;
    permute(a,i);
    return 0;
}