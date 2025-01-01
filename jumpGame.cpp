class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<bool> dp(n,false);
        dp[n-1]=true;
        for(int i=nums.size()-1;i>=0;i--){
            for(int j=i+1;j<nums.size() && j<=i+nums[i];j++){
                // cout<<i<<" "<<j<<" "<<nums[j]<<" "<<dp[j]<<endl;
                if(dp[j]==true){
                    dp[i]=true;
                    break;
                }
            }
        }

        if(dp[0]==1) return true;
        return false;
    }
};
