
class Solution
{
    public:
    string reverse(string str)
    { 
        int n= str.length();
        int s=0,e=n-1;
        while(s<e)
        {
            if(!(str[s]>= 'A' && str[s]<='Z') && !(str[s]>='a' && str[s]<='z'))
            {
                s++;
            }
            else if(!(str[e]>='A' && str[e]<='Z') && !(str[e]>='a' && str[e]<='z'))
            {
                e--;
            }
            else
            {
                swap(str[s],str[e]);
                s++;
                e--;
            }
        }
        return str;
    } 
};
