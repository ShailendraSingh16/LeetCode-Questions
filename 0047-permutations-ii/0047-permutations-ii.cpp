class Solution {
private:
   void solve(vector<int>& nums, vector<vector<int>>& ans, int index){

       if(index>=nums.size()){
           ans.push_back(nums);
           return;
       }

       for(int j=index;j<nums.size();j++){
           swap(nums[index],nums[j]);
           solve(nums,ans,index+1);
           swap(nums[index],nums[j]);
       }
   }

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {

        vector<vector<int>>ans;

        solve(nums,ans,0);
        
        set<vector<int>>unique;

        for(int i=0;i<ans.size();i++){
            unique.insert(ans[i]);
        }

        vector<vector<int>>arr;
        for(auto& it:unique){
            arr.push_back(it);
        }

        return arr;
    }
};