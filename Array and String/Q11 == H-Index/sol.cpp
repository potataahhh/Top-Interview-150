class Solution {
public:

    int f(vector<int> &citations,int mid){
        int temp=0;
        for(int i=0;i<citations.size();i++){
            temp=citations[i]>=mid ? temp+1:temp;
        }
        return temp>=mid;
    }

    int hIndex(vector<int>& citations) {
        int l =1,r=citations.size();
        int res=0;

        while(l<=r){
            int mid = l+(r-l)/2;

            if(f(citations,mid)){
                l=mid+1;
                res=mid;
            }
            else
                r=mid-1;
            
        }
       return res; 
    }
};
