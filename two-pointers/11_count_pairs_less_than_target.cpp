// https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(begin(nums), end(nums));
        int n = nums.size();
        int right = n - 1;
        int cnt = 0;

        for (int left = 0; left + 1 < n; ++left) {
            while (left < right && nums[left] + nums[right] >= target)
                --right;

            if (left >= right) break;
            cnt += (right - left);
        }

        return cnt;
    }
};