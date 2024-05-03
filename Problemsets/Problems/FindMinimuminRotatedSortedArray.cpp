#include <vector>

class Solution {
public:
    int findMin(std::vector<int>& nums) {
        int n = nums.size();
        int l=0, r=n-1;
        while (l<r) {
            int m = l+(r-l)/2;
            if (nums[m]>nums[r]) l=m+1;
            else r=m;
        }
        return nums[l];
    }
};
