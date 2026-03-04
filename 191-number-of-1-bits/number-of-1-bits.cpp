class Solution {
public:
    int hammingWeight(int n) {
        vector<int> v;

        int i = 0;
        while (i < n) {
            v.push_back(n % 2);
            n /= 2;
        }
        reverse(v.begin(), v.end());
        int count=0;
        for(auto x:v){
            if(x==1) count++;
        }
        return count;
    }
};