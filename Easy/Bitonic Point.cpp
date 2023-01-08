class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    int maxi=0;
	    for(int i=0;i<n;i++)
	    {
	        maxi=max(arr[i],maxi);
	    }
	    return maxi;
	}
};
