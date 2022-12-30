
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int n = S.size();
        string temp;
        string ans = "";
        for(int i=0;i<n;i++){
            if( i == n - 1){
                temp += S[i];
                reverse(temp.begin(), temp.end());
                ans = ans + temp;
            }
            if(S[i] == '.'){
                reverse(temp.begin(), temp.end());
                ans = ans + temp;
                ans += '.';
                temp = "";
            }
            else{
                temp += S[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans; 
    } 
};
