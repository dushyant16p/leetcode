class Solution {
public:
    bool checkPerfectNumber(int num) {
        // int temp=num;
        int sum=0;
        int i=1;
        while(i<num){
            if(num%i==0){
                sum+=i;
            }
            i++;
        }
        if(sum==num) return true;
        else return false;
    }
};