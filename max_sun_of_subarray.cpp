#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {5,4,-1,7,8};
    int maxi = 0;
    int currnt = 0;
    
    for(auto it:arr){
        currnt+=it;
        if(currnt>maxi){
            maxi=currnt;
        }
        
        if(currnt<0){
            currnt=0;
        }
    }
    cout<<maxi;
    
    return 0;
}
