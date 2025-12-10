class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> box(50, 0); 
        
        for(int num = lowLimit; num <= highLimit; num++){
            int sum = 0, temp = num;
            while(temp){
                sum += temp % 10;
                temp /= 10;
            }
            box[sum]++; 
        }
        
        return *max_element(box.begin(), box.end()); 
    }
};
