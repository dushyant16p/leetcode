class Solution {
public:
    bool detectCapitalUse(string word) {
        int uppercount=0;
        int n=word.size();
    for(auto ch:word){
        if(ch>='A' && ch<='Z'){
            uppercount++;
        }
    }
    if(uppercount==n){
        return true;
    } 
    if(uppercount==0){
        return true;
    } 
    if(uppercount==1 && word[0]>='A' && word[0]<='Z'){ return true ;
    }
        return false;
    }
};