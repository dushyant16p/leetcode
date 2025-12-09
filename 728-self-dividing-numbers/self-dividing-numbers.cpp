class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;

        while(left <= right){          
            int temp = left;           
            while(temp > 0){           
                int last = temp % 10;
                if(last == 0) break;
                if(left % last != 0) break;
                temp /= 10;
            }

            if(temp == 0) v.push_back(left);   

            left++;                    
        }
        return v;
    }
};
