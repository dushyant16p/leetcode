class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int n_sum=n*(n+1)/2;
        int arr_sum=0;
        for(auto x:nums){
            arr_sum+=x;
        }
        return n_sum-arr_sum;
    }
};