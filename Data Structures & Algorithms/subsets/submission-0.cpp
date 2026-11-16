class Solution {
public:
    void backtrack(int index,vector<int>& nums,vector<vector<int>> &result,vector<int> current){
        if(index==nums.size()){
            result.push_back(current);
            return;
        }

        current.push_back(nums[index]);
        backtrack(index+1,nums,result,current);

        current.pop_back();

        backtrack(index+1,nums,result,current);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(0,nums,result,current);
        return result;
    }
};
