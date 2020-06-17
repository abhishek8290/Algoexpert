//c++ solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int>ans;
        for( int i=0 ;i < nums.size() ; i++){
            int temp = target - nums[i];
            auto it = mp.find(temp);
            if(it != mp.end()){
                ans.push_back(i);
                ans.push_back(it->second);
                return ans;
            }
            mp.insert({nums[i],i});
            
        }
        return ans;
    }
};
