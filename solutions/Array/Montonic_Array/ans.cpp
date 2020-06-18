class Solution {
public:
    bool isMonotonic(vector<int>& A) {
       
       for(int i =1;i<A.size();i++){
           if(A[i]>A[i-1]){
               for(int p = i ;p<A.size();p++)
                   if(A[p]<A[p-1])return 0;
           }
           if(A[i]<A[i-1]){
               for(int p = i ;p<A.size();p++)
                   if(A[p]>A[p-1])return 0;
           }
       }
        return 1;
    }
};