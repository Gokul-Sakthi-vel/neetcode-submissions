class Solution {
private:
    void combinationSum(int index,vector<int>& nums, int target,vector<vector<int>> &res,vector<int> &combo){
        if(target==0){
            res.push_back(combo);
            return;
        }
        for(int j=index;j<nums.size();j++){
          if(target-nums[j]>=0){
            combo.push_back(nums[j]);
            combinationSum(j,nums,target-nums[j],res,combo);
            combo.pop_back();
          } 
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> combo;
        combinationSum(0,nums,target,res,combo);
        return res;
    }
};
