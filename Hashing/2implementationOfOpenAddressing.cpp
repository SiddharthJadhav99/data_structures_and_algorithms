#include <iostream>
using namespace std;
struct MyHash{
    int *arr;
    int cap;
    int size;
    MyHash(int c){
        cap = c;
        size = 0;
        for(int i = 0; i < c; i++){
            arr[i] = -1;
        }
    }
    int hash(int key){
        int hash = key%cap;
        return hash;
    }
    bool search(int key){
        int h = hash(key);
        int i = h;
        while(i != -1){
            if(arr[h] == key){
                return true;
            }
            i = (i+1)%cap;
            if(i == h){
                return false;
            }
        }
        return false;
    }
    bool insert(int key){
        if(size == cap){
            return false;
        }
        int i = hash(key);
        while(arr[i] != -1 && arr[i] != -2 && arr[i] != key){
            i = (i+1)%cap;
        }
        if(arr[i] == key){
            return false;
        }
        else{
            arr[i] = key;
            size++;
            return true;
        }
    }
    bool erase(int key){
        int h = hash(key);
        int i = h;
        while(arr[i] != -1){
            if(arr[i] == key){
                arr[i] = -2;
                return true;
            }
            i = (i+1)%cap;
            if(i == h){
                return false;
            }
        }
        return false;
    }
};