class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int xoR=0; 
    for(int i=0;i<nums.size();i++){
        xoR=xoR^nums[i];
    }

    return xoR;
    }
};
