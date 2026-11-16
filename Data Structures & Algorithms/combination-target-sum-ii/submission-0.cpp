class Solution {
private:
    void combinationSum2(int index,vector<int>& candidates, int target,vector<vector<int>> &res,vector<int> &combo){
        if(target==0){
            res.push_back(combo);
            return;
        }
        for(int j=index;j<candidates.size();j++){
        if(j>index && candidates[j]==candidates[j-1]){
            continue;
        }
        if(candidates[j]>target){
            break;
        }
        combo.push_back(candidates[j]);
        combinationSum2(j+1,candidates,target-candidates[j],res,combo);
        combo.pop_back();
        }

    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> combo;
        sort(candidates.begin(),candidates.end());
        combinationSum2(0,candidates,target,res,combo);
        return res;
    }
};
