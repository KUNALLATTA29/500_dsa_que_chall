#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {20,12,10,15,2};
    
    for(int i=0;i<arr.size();i++){
        int mini = i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[mini]>arr[j]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}
