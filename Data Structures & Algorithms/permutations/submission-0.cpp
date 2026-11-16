class Solution {
private:
    void permute(vector<vector<int>> &res,vector<int> &perm,vector<int>& nums){
        if(perm.size()==nums.size()){
            res.push_back(perm);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(find(perm.begin(),perm.end(),nums[i])!=perm.end()){
                continue;
            }
            perm.push_back(nums[i]);
            permute(res,perm,nums);
            perm.pop_back();
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> perm;
        permute(res,perm,nums);
        return res;
    }
};
