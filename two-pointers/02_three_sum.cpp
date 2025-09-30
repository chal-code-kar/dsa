// https://www.educative.io/interview-prep/coding/3sum

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(begin(nums), end(nums));

    vector<vector<int>> triplets;
    int n = nums.size();

    for (int i = 0; i < n; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        
        int left = i + 1;
        int right = n - 1;
        int req = -nums[i];

        while (left < right) {
            int cur = nums[left] + nums[right];

            if (cur < req) {
                ++left;
            } else if (cur > req) {
                --right;
            } else {
                triplets.push_back({ nums[i], nums[left], nums[right] });
                ++left;
                while (left < n && nums[left] == nums[left - 1]) ++left;
            }
        }
    }

    return triplets;
}
