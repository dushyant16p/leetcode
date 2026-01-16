class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int max_candies=0;
        for(auto x:candies){
            max_candies=max(x,max_candies);
        }
        vector<bool>b;
        for(auto x:candies ){
            if(x+extraCandies>=max_candies){
                b.push_back(true);
            }else b.push_back(false);
        }

        return b;
    }
};