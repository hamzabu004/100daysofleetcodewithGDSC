class Solution {
public:
    int arraySign(vector<int>& nums) {
        short vectr_len = nums.size() - 1;
        int prod  = 1;
        while (vectr_len >= 0)
        {
            if (nums[vectr_len] == 0)
                return 0;
            prod *= (nums[vectr_len] > 0 ? 1 : -1 );
            vectr_len--;
        }
        if (prod > 0) return 1;
        else if (prod < 0) return -1;
        else return 0;
    }
};