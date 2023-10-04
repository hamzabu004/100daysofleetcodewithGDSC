class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        short lst_idx = digits.size () - 1;
  digits[lst_idx] += 1;

  for (int i = digits.size () - 1; i >= 0; i--)
    {
      short lstdgt = digits[i];
      if (lstdgt == 10)
	{

	  digits[i] = 0;

	}
      else
	{
	  break;
	}
      if (i == 0)
	{
	  digits.insert (digits.begin (), 1);
	  break;
	}
      digits[i - 1] += 1;
    }
  return digits;
    }
};