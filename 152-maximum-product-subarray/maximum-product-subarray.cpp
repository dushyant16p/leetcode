class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // if(nums.size()==1) return nums[0];
        int max_product=nums[0];

        for(int i=0;i<nums.size();i++){
            int product=1;
            for(int j=i;j<nums.size();j++){
                product*=nums[j];
                max_product=max(max_product,product);
            }
        }
        return max_product;
    }
};