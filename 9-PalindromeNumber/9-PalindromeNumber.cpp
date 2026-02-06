// Last updated: 2/6/2026, 12:42:43 PM
class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers or numbers ending with 0 (except 0 itself)
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;
        
        int reversedHalf = 0;
        
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }
        
        // Even length: x == reversedHalf
        // Odd length: x == reversedHalf / 10
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
