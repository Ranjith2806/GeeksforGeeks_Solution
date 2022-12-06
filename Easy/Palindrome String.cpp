
/*
Given a string S, check if it is palindrome or not.

Example 1:

Input: S = "abba"
Output: 1
Explanation: S is a palindrome*/

class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int n=S.size();
	    int a=0,b=n-1;
	    while(a<b)
	    {
	        if(S[a]==S[b]){
	            a++;
	            b--;
	        }
	        else return 0;
	    }
	    return 1;
	}

};
