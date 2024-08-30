#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {20,12,10,15,2};
    
    for(int i=1;i<arr.size();i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}
