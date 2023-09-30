class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        short int x = 0;
        for(short int i = 0; i < operations.size() ; i++)
        {
            operations[i].find("++");
            
            if (operations[i].find("++") != string::npos)
            {       
                x++;
                continue;
            }
            x--;
             
        }
        return x;

    }
};