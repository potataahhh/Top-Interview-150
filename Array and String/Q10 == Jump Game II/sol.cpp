class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jump =0;
        int curr=0;
        int end=0;

        for(int i=0;i<n-1;i++){
            curr = max(curr,i+nums[i]);

            if(i==end){
                jump++;
                end=curr;
            }
        }
        return jump;
    }
};
