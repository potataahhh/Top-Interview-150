class Solution {
public:
    bool canJump(vector<int>& nums) {
        int temp = 0;
        
        for(int i=0;i<=temp && i<nums.size();++i ){
            temp = max(temp,i+nums[i]);
        }
        return temp>=nums.size()-1;
    }
};
