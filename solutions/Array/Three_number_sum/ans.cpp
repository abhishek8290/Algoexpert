//how to get rid of repeated sets is still a problem 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& A) {
        vector<vector<int>>ans;
        for(int i=0;i<A.size()-1;i++){
            int curr_sum = -A[i];
            set<int>st;
            // solve like two sum
            //how to remove repeataion???
            for(int j=i+1;j<A.size();j++){
                int target = curr_sum - A[j];
                if(st.find(target)!=st.end()){
                    vector<int>p;
                    p.push_back(A[i]);
                    p.push_back(A[j]);
                    p.push_back(target);
                    ans.push_back(p);
                }
                st.insert(A[j]);
            }
        }
        return ans ;
    }
};