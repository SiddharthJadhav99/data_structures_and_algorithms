#include <iostream>
#include <list>
using namespace std;
struct MyHash{
    int bucket;
    list<int> *table;
    MyHash(int x){
        bucket = x;
        table = new list<int>[x];
    }
    void insert(int key){
        int rem = key%bucket;
        table[rem].push_back(key);
    }
    void remove(int key){
        int i = key%bucket;
        table[i].remove(key);
    }
    bool search(int key){
        int i = key%bucket;
        for(auto x : table[i]){
            if(x = key){
                return true;
            }
        }
        return false;
    }
};