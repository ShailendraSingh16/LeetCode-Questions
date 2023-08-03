class Solution {
private:
   void reverse(vector<int>& nums, int start, int end){
       while(start<end){
           swap(nums[start++],nums[end--]);
       }
   }
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;

        //reverse entire array
        reverse(nums,0,n-1);

        //reverse first k elements
        reverse(nums,0,k-1);

        // Reverse the remaining n-k elements
        reverse(nums, k, n - 1);

    }
};