class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftarr(n),rightarr(n),ans(n) ;
       

       // Leftarray logic

       leftarr[0]=1 ;
        for(int i=1;i<n;i++){
            leftarr[i]=nums[i-1]*leftarr[i-1];
        }

        //rightarray logic
        rightarr[n-1]=1;
        for(int i=n-2;i>=0;i--){
            rightarr[i]=nums[i+1]*rightarr[i+1];
        }

        // answer array
        for(int i=0;i<n;i++){
            ans[i]=leftarr[i]*rightarr[i];
        }
        return ans ;
    }
};