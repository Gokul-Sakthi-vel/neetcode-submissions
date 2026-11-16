class Solution {
private:
    void subsetsWithDup(int index,vector<int>& nums, vector<vector<int>> &res,vector<int> &subset){
            res.push_back(subset);
       
        for(int j=index;j<nums.size();j++){
            if(j>index && nums[j]==nums[j-1]){
                continue;
            }
            subset.push_back(nums[j]);
            subsetsWithDup(j+1,nums,res,subset);
            subset.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        sort(nums.begin(),nums.end());
        subsetsWithDup(0,nums,res,subset);
        return res;
    }
};
