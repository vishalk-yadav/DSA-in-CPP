class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int integer = x;
        while (x > 0) {
            int reminder = x % 10;
            sum += reminder;
            x /= 10;
        }
        if (integer % sum == 0)
            return sum;
        return -1;
    }
};