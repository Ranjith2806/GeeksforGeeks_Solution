/*Given a string consisting of lowercase english alphabets. Find the repeated character present first in the string.

Example 1:

Input:
S = "geeksforgeeks"
Output: g
Explanation: g, e, k and s are the repeating
characters. Out of these, g occurs first.
*/

class Solution
{
  public:
    char firstRep (string s)
    {
        for(int i=0;i<s.size();i++)

        {

            int repeated=count(s.begin(),s.end(),s[i]);

            if(repeated>1)

            {

                return s[i];

            }

            

        }

        return '#';
    }
};
