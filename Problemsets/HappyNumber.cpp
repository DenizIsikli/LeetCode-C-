class Solution {
public:
    bool isHappy(int n) {
        // ujse a for loop
        int sum;
        while (n != 1) {
            sum = 0;
            while (n > 0) {
                sum += (n % 10) * (n % 10);
                n /= 10;
            }
            n = sum;
            if (n == 4) return false;
        }
        return true;
    }
};
