class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int maxwater=0;
        while(i<j){
            int water=(j-i)*min(height[i],height[j]);
            maxwater=max(water,maxwater);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return maxwater;

    }
};