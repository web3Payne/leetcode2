class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
    	sort(nums.begin(), nums.end());
    	vector<int> dp(target+1, 0);
    	dp[0] = 1;
    	for (int i = 1; i <= target; ++i) {
    		for (int j = 0; j < nums.size() && nums[j] <= i; ++j) {
    			dp[i] += dp[i-nums[j]];
    		}
    	}
    	return dp[target];
    }
};