//User function Template for C++

class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        int sum=0;
        int count=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<N;i++){
            
            if(sum+arr[i]<=K){
                sum=sum+arr[i];
                count++;
            }
        }
        return count;
    }
};
