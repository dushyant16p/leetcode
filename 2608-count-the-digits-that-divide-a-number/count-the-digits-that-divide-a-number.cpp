class Solution {
public:
    int countDigits(int num) {
        int count = 0, last;
        int temp = num;

        while(temp){
            last = temp % 10;
            if(num % last == 0){
                count++;
            }
            temp /= 10;
        }
        return count;
    }
};
