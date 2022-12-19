class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
         
        int l=0,h=0;
        long long ans=0;
        vector<int>val;
        if(s==0)
        {
            val.push_back(-1);
            return val;
        }
        while(h<n){
            ans+=arr[h];
            if(ans==s){
                val.push_back(l+1);
                val.push_back(h+1);
                return val;
            }
            if(ans>s){
                while(ans>s){
                    ans-=arr[l];
                    l++;
                }
                if(ans==s){
                val.push_back(l+1);
                val.push_back(h+1);
                return val;
            }
            }
            h++;
        }
        val.push_back(-1);
        return val;
    }
};
