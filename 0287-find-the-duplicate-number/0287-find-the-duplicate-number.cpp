class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int ans=-1;

        unordered_map<int,int>mpp;

        for(int i=0;i<nums.size();i++){
            if(mpp.find(nums[i]) == mpp.end()){
                mpp[nums[i]]=1;
            }
            else{
                mpp[nums[i]]++;
            }
        }

        for(auto& it : mpp){
            if(it.second>=2){
                ans= it.first;
            }
        }
        return ans;
    }
};