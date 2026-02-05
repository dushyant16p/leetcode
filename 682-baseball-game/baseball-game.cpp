class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(auto x:operations){
            if(x=="C"){
                st.pop();
            }else if(x=="D"){
                int temp=st.top();
                temp=2*temp;
                st.push(temp);
            }else if(x=="+"){
                int temp=st.top();
                st.pop();
                int sum =temp+st.top();
                st.push(temp);
                st.push(sum);
            }
            else{
                st.push(stoi(x));
            }
        }

        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};