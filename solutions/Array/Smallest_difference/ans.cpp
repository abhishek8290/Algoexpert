class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& A) {
        sort(A.begin(),A.end());
        vector<vector<int>> ans;
        int min_diff=INT_MAX;
        for(int i=0;i<A.size()-1;i++){
            min_diff = min(min_diff, A[i+1]-A[i]);
        }
        for(int i=0;i<A.size()-1;i++){
            if((A[i+1]-A[i])==min_diff){
                vector<int>p;
                p.push_back(A[i]);
                p.push_back(A[i+1]);
                ans.push_back(p);
            }
        }
        return ans ;
        
        
    }
};