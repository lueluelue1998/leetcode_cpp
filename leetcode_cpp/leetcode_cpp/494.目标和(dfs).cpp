#include <iostream>
#include <vector>
using namespace std;

//
//class Solution {
//public:
//	int findTargetSumWays(vector<int>& nums, int target) {
//		int n = nums.size();
//		//划分为两个子集A：+   B：-
//		//sum=target+2*sumA
//		int sum = target;
//		for (int i = 0; i < n; i++) {
//			sum += nums[i];
//		}
//		if (sum % 2 == 1)	return 0;
//		sum = sum / 2;
//
//		//dp[i][j]表示有i个物品，背包容量为j，有多少种放法。
//		//所求答案为dp[nums][target]
//
//		vector<int> temp(sum + 1);
//		vector<vector<int>> dp(n + 1, temp);
//		dp[0][0] = 1;
//		//从底向上
//		for (int i = 1; i <= n; i++) {
//			for (int j = 0; j <= sum; j++) {
//				if (j >= nums[i - 1]) {
//					dp[i][j] = dp[i - 1][j] + dp[i - 1][j - nums[i - 1]];
//				}
//				else {
//					dp[i][j] = dp[i - 1][j];
//				}
//			}
//		}
//		return dp[n][sum];
//	}
//};
//
// 
// 
// 
//test

//**********************DFS
//class Solution {
//public:
//	int count = 0;
//
//	void dfs(vector<int>& nums, int target, int i, int sum) {
//		int n = nums.size();
//		if (i == n) {
//			if (sum == target) {
//				count++;
//			}
//
//		}
//		else {
//			dfs(nums, target, i + 1, sum + nums[i]);
//			dfs(nums, target, i + 1, sum - nums[i]);
//		}
//	}
//
//	int findTargetSumWays(vector<int>& nums, int target) {
//		dfs(nums, target, 0, 0);
//		return count;
//	}
//
//};
//
//int main() {
//
//	Solution s;
//	vector<int> nums = {1,1,1,1,1};
//	int target = 3;
//	int ans = s.findTargetSumWays(nums,target);
//	cout << ans << endl;
//	cout << "hello world!" << endl;
//
//	system("pause");
//	return 0;
//}