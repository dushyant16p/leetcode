class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)return false;
        int last=1162261467;
        if(last%n==0){
            return true;
        }else return false;
    }
};
