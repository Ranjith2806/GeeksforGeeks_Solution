    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> v;
        int max=a[n-1];
        for(int i=n-1;i>0;i--){
            if(a[i]>=max){
                v.push_back(a[i]);
                max=a[i];
                
            }
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
