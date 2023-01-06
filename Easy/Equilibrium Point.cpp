class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        int rightSum=0;
        for(int i=0;i<n;i++)
        {
            rightSum+=a[i];
        }
        int leftSum=0;
        for(int i=0;i<n;i++)
        {
            rightSum-=a[i];
            if(rightSum==leftSum)
            {
                return i+1;
            }
            leftSum+=a[i];
        }
        return -1;
    }

};
