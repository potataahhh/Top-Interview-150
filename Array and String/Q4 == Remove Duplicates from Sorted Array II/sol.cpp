class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        // base condition

        if(n<=2) return n;

        int i=0;
        int j=1;

        for(int i=2;i<n;i++){
            if(nums[j-1]!=nums[i]){
                nums[++j]=nums[i];
            }
        }
        return ++j;
    }
};
