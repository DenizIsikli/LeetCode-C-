#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();
        for (int i = n-1; i >= 0; --i) {
            if (i == n-1) {
                digits[i]++;
            }
            if (digits[i] == 10) {
                digits[i] = 0;
                if (i == 0) {
                    digits.insert(digits.begin(), 1);
                } else {
                    digits[i-1]++;
                }
            }
        }
        return digits;
    }
};
