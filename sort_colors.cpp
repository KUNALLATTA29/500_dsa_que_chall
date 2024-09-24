class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ze=0,one=0,two=0;
        for(auto it:nums){
            if(it==0){
                ze++;
            }else if(it==1){
                one++;
            }else{
                two++;
            }
        }
        for(int i=0;i<ze;i++){
            nums[i]=0;
        }
        for(int i=ze;i<ze+one;i++){
            nums[i]=1;
        }
        for(int i=ze+one;i<ze+one+two;i++){
            nums[i]=2;
        }
        
    }
};
