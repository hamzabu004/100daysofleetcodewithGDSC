class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>  f_nums;
        bool flag = false;
        for (int i = 0; i < n; i++ )
        {  
                f_nums.push_back(nums[i]);
                f_nums.push_back(nums[i+n]);
                    
        }
        return f_nums;
        
    }
};