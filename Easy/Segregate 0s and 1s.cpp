/*Given an array of length N consisting of only 0s and 1s in random order. Modify the array to segregate 0s on left side and 1s on the right side of the array.

Example 1:

Input:
N = 5
arr[] = {0, 0, 1, 1, 0}
Output: 0 0 0 1 1
*/

class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if(arr[i]==1 && arr[j]==0)
            swap(arr[i],arr[j]);
            else if(arr[i]==0)
            i++;
            else if(arr[j]==1)
            j--;
        }
        
    }
};
