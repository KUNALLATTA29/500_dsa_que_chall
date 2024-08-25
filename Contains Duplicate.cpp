#include<bits/stdc++.h>
using namespace std;

bool sol(map<int,int> mapi){
    for(auto it:mapi){
        if(it.second>1){
            return true;
        }
    }
    return false;
}

int main(){
    
    vector<int> arr = {1,1,1,3,3,4,3,2,4,2};
    map<int,int> mapi;
    for(auto it:arr){
        mapi[it]++;
    }
    if(sol(mapi)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    
    return 0;
}
