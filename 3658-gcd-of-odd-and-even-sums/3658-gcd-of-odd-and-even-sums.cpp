class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int firstOd = n * n;
        int firstEven = n *(n+1);
        gcd(firstOd , firstEven);

        return n ;
    } 
};