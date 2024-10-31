int maxArea(vector<int>& height) {
        int maxi=0;
        int i=0;
        int j=height.size()-1;
        while(i<=j){
            int minheight=min(height[i],height[j]);
            int capacity=(j-i)*minheight;
            maxi=max(maxi,capacity);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return maxi;
    }
