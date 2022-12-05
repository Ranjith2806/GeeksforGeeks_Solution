/*
Given a non-negative integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x*/



class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        if(n==0)
        return false;
        return (ceil(log2(n)==floor(log2(n))));

    }
};
