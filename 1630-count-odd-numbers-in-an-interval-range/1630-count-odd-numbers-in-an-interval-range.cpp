class Solution {
public:
    int countOdds(int low, int high) {
        if(low%2 == 0)
        {
            if(high%2 == 0)
            {
                return (high-low) >> 1;
            } else {
                return (high + 1 - low) >> 1;
            }
     

        } else {
            if(high%2 == 0)
            {
                return (high - (low - 1)) >> 1;
            } else {
                return (((high - low) >> 1) + 1);
            }

        }
    }
};