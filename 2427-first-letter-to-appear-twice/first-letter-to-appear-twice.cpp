class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int>m;

        for(auto x:s){
            m[x]++;
            if(m[x]==2){
                return x;
            }
        }
        return ' ';
    }
};