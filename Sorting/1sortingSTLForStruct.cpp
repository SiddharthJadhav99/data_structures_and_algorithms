#include <iostream>
using namespace std;
struct Point{
    int x;
    int y;
};
bool great(Point P1, Point P2){
            return (P1.x + P1.y) < (P2.x + P2.y);
    }
int main(){
    Point P1[] = {{1,2}, {3,7}, {8,1}, {5,3}};
    sort(P1, P1+n, great)


}