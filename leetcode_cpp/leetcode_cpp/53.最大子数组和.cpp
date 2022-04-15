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
//    int maxSubArray(vector<int>& nums) {
//		//dp[i]是以nums[i]结尾的最大子数组和
//		int n = nums.size();
//		vector<int>dp(n);
//		int ans = nums[0];
//		dp[0] = nums[0];
//		for (int i = 1; i < n; i++) {
//			dp[i] = max(nums[i], dp[i - 1] + nums[i]);
//			ans = max(ans, dp[i]);
//		}
//		return ans;
//    }
//};