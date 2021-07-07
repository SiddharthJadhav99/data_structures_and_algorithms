#include <iostream>
using namespace std;
struct complex{
    int n1;
    int n2;
};
int main(){
    complex a;
    complex b;
    cout<<"Enter the real part of 1st complex number : ";
    cin>>a.n1;
    cout<<endl;
    cout<<"Enter the imaginery part of 1st complex number : ";
    cin>>a.n2;
    cout<<endl;
    cout<<"The Complex number you entered is : "<<a.n1 <<"+ i"<<a.n2<<endl;
    cout<<endl;
    cout<<"Enter the real part of 2nd complex number : ";
    cin>>b.n1;
    cout<<endl;
    cout<<"Enter the imaginery part of 2nd complex number : ";
    cin>>b.n2;
    cout<<endl;
    cout<<"The Complex number you entered is : "<<b.n1 <<"+ i"<<b.n2<<endl;
    cout<<endl;
    cout<<"The addition of both complex numbers is : "<<a.n1 + b.n1 <<"+ i"<<a.n2 + b.n2;
    return 0;
}
