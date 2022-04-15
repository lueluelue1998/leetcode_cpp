//#include <iostream>
//#include <vector>
//using namespace std;
//
//
////test
//int main() {
//
//	cout << "hello world!" << endl;
//
//	system("pause");
//	return 0;
//}
//
//class Solution {
//public:
//	bool canPartition(vector<int>& nums) {
//		int sum = 0;
//		int n = nums.size();
//		for (int i = 0; i < n; i++) {
//			sum += nums[i];
//		}
//		if (sum % 2 == 1)	return false;//总和为奇数，不可能成立
//		int target = sum / 2;
//
//		//dp[i][j]定义 前i个物品，价值j
//		vector<bool> temp(target + 1);
//		vector<vector<bool>>dp(n + 1, temp);
//		//bace case
//		// for(int i=0;i<=n;i++){
//		//     dp[i][0]=true;
//		// }
//		dp[0][0] = true;
//
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= target; j++) {
//				if (j >= nums[i - 1]) {
//					dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];//第i个物品对应nums[i-1]
//				}
//				else {
//					dp[i][j] = dp[i - 1][j];
//				}
//
//			}
//		}
//		return dp[n][target];
//
//	}
//};