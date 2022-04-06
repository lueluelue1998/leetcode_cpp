//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////宽度升序排列 高度降序排列
//bool myCompare(vector<int>& v1, vector<int>& v2) {
//    return v1[0] == v2[0] ? v1[1] > v2[1] : v1[0] < v2[0];
//}
//
//class Solution {
//public:
//
//
//
//    int maxEnvelopes(vector<vector<int>>& envelopes) {
//        sort(envelopes.begin(), envelopes.end(), myCompare);
//        int n = envelopes.size();
//        vector<int> dp(n,1);
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < i; j++) {
//                if (envelopes[j][1] < envelopes[i][1]) dp[i] = max(dp[i], dp[j] + 1);
//            }
//        }
//        int ans = 0;
//        for (int i = 0; i < n; i++) {
//            if (ans < dp[i]) ans = dp[i];
//        }
//        return ans;
//    }
//
//
//};
//
////test
//int main() {
//
//    //[[5,4],[6,4],[6,7],[2,3]]
//    Solution s;
//    vector<vector<int>>nums = { {5,4},{6,4},{6,7},{2,3} };// {5,4},{6,4},{6,7},{2,3}};
//    int ans = s.maxEnvelopes(nums);
//    cout << ans << endl;
//	cout << "hello world!" << endl;
//
//	system("pause");
//	return 0;
//}