class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void rev(vector<long long>& arr, int start, int end)
    {
        while(start<=end)
        {
            int temp = arr[start];
            arr[start++] = arr[end];
            arr[end--] = temp;
        }
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        for(int i=0; i<n;i=i+k)
        {
            if(i+k<n)
                rev(arr, i, i+k-1);
            else
                rev(arr, i, n-1);
        }
    }
};
