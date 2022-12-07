/*
Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, act and tac are an anagram of each other.

Example 1:

Input:a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have same characters with
        same frequency. So, both are anagrams.*/

/*
Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, act and tac are an anagram of each other.

Example 1:

Input:a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have same characters with
        same frequency. So, both are anagrams.*/


class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        if(a.length()!=b.length())
        {
            return false;//if length of given string a and b is not equal then obviously it is not anagram
        }
        
        //sorting string a
        sort(a.begin(),a.end());
        //sorting string b
        sort(b.begin(),b.end());
        //comparing string a and b if both the string are equal then retun dthe value 0
        int ans = (a.compare(b));
        //if both the values in string is same then return true as answer else false
        if(ans==0)
        return true;
        else
        return false;
        
    }
};
