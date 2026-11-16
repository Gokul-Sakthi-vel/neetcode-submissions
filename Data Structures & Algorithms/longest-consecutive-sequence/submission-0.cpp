class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> s(nums.begin(),nums.end());
        int longest=0;

        for(int num:s){
            if(s.find(num-1)==s.end()){
                int currentstreak=1;
                int currentnum=num;
            

            while(s.find(currentnum+1)!=s.end()){
                currentnum++;
                currentstreak++;
            }
            longest=max(longest,currentstreak);
            }
        }
        return longest;
    }
};
