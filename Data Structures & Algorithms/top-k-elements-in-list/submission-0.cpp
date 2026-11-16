class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int num:nums){
            count[num]++;
        }

        vector<vector<int>> bucket(nums.size()+1);
        for(auto it:count){
            int num=it.first;
            int freq=it.second;
            bucket[freq].push_back(num);
        }

        vector<int> result;
        for(int i=bucket.size()-1;i>=0;i--){
            for(int num:bucket[i]){
              result.push_back(num);
            }
            if(k==result.size()){
                return result;
            }  
        }
        return result;
    }
};
