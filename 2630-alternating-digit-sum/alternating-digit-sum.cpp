class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int rev = 0;
        int temp = n;
        int i = 0;

        while (temp > 0) {
            rev=rev*10+(temp % 10);
            temp=temp/10;
        }

        while(rev>0) {
            if (i%2==0) {
                sum+=rev%10;
            } else {
                sum-=rev%10;
            }
            rev=rev/10;
            i++;
        }

        return sum;
    }
};