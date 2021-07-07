#include <iostream>
using namespace std;
class complex{
    private:
    int n1;
    int n2;
    public:
    void getComp(){
        cout<<"Enter the real number : ";
        cin>>n1;
        cout<<endl;
        cout<<"Enter the imaginery number : ";
        cin>>n2;
        cout<<endl;
    }
    complex operator+(complex obj){
        complex rel;
        rel.n1 = n1 + obj.n1;
        rel.n2 = n2 + obj.n2;
        return rel; 
    }
    complex operator-(complex obj){
        complex rel;
        rel.n1 = n1 - obj.n1;
        rel.n2 = n2 - obj.n2;
        return rel;
    }
    complex operator*(complex obj){
        complex rel;
        rel.n1 = n1*obj.n1;
        rel.n2 = n2*obj.n2;
        return rel;
    }
    void printComplex(){
        cout<<n1<<" + "<<n2<<"i"<<endl;

    }
};
int main(){
    complex comp1;
    complex comp2;
    comp1.getComp();
    comp1.printComplex();
    comp2.getComp();
    comp2.printComplex();
    complex comp3 = comp1 + comp2;
    comp3.printComplex();
    return 0;
}
