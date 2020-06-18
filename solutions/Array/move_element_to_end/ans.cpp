class Solution {
public:
    void moveZeroes(vector<int>& A) {
        int cnt = 0;
        for(int i=0; i<A.size();i++)
            if(A[i]!=0)
                A[cnt++]=A[i];
        while(cnt<A.size()) A[cnt++] = 0;
            
        
    }
};