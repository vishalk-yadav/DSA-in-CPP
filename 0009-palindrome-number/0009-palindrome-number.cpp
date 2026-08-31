class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int temp = x;
        long long int reverseNum = 0;

        while(temp != 0) {
            int remainder = temp % 10;
            reverseNum = reverseNum * 10 + remainder;
            temp /= 10; 
        }

        if(reverseNum == x) {
            return true;
        } else {
            return false;
        }
    }
};