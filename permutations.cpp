#include<bits/stdc++.h>
using namespace std;

void permute(vector<int> arr, int left, int right){
    if(left==right){
        for(auto it:arr){
            cout<<it<<" ";
        }
        cout<<endl;
    }else{
        for(int i=left;i<=right;i++){
            swap(arr[left],arr[right]);
            permute(arr,left+1, right);
            swap(arr[left],arr[right]);
        }
    }
}

int main(){
    
    vector<int> arr = {1,2,3};
    
    int n = arr.size()-1;
    
    permute(arr,0,n);
    
    return 0;
}
