#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string, int> s;
    s["sid"] = 10;
    s.insert({"raj", 20});
    s["sanket"] = 30;
    if(s.find("raj") != s.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    s.erase("sanket"); 
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    return 0;
}