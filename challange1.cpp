class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        short int x = 0;
        for(short int i = 0; i < operations.size() ; i++)
        {
            int desired_op = operations[i].find("++");
            
            if (desired_op != string::npos)
         {       x++;
                continue;
        }
                x--;
             
        }
        return x;

    }
};
