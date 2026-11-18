class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
          vector<int> res(nums.size());

          int forwardproduct=1;
          for(int i=0;i<nums.size();i++){
            res[i]=forwardproduct;
            forwardproduct*=nums[i];
          }

          int backwardproduct=1;
          for(int i=nums.size()-1;i>=0;i--){
            res[i]*=backwardproduct;
            backwardproduct*=nums[i];
          }
        return res;
    }
};
