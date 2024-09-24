#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<vector<int>> arr = {{1,1,1}, {1,0,1}, {1,1,1}};
    set<int> setrow;
    set<int> setcol;
    
    for(int i=0;i<arr.size(); i++){
        for(int j=0;j<arr[i].size();j++){
            if(arr[i][j]==0){
                setrow.insert(i);
                setcol.insert(j);
            }
        }
    }
    
    for(auto it: setrow){
        for(int i=0;i<arr[it].size();i++){
            arr[it][i]=0;
        }
    }
    
    for(auto it: setcol){
        for(int i=0;i<arr.size();i++){
            arr[i][it]=0;
        }
    }
    
    for(int i =0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
