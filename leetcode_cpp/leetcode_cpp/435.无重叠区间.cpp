//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
////动态规划
////class Solution {
////public:
////	int eraseOverlapIntervals(vector<vector<int>>& intervals) {
////		if (intervals.empty()) {
////			return 0;
////		}
////
////		sort(intervals.begin(), intervals.end(), [](const auto& u, const auto& v) {
////			return u[0] < v[0];
////		});
////
////		int n = intervals.size();
////		vector<int> f(n, 1);
////		for (int i = 1; i < n; ++i) {
////			for (int j = 0; j < i; ++j) {
////				if (intervals[j][1] <= intervals[i][0]) {
////					f[i] = max(f[i], f[j] + 1);
////				}
////			}
////		}
////		return n - *max_element(f.begin(), f.end());
////	}
////};
////
////作者：LeetCode - Solution
////链接：https ://leetcode.cn/problems/non-overlapping-intervals/solution/wu-zhong-die-qu-jian-by-leetcode-solutio-cpsb/
////来源：力扣（LeetCode）
////著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
//
//
////贪心算法
//class Solution {
//public:
//	int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//
//		if (intervals.size() == 0) {
//			return 0;
//		}
//
//		//sort(intervals.begin(), intervals.end(), [](const vector<int> &a,const vector<int> &b){
//		//	return a[1] < b[1];//右边界小的在前
//		//});
//		
//		sort(intervals.begin(), intervals.end(), [](const auto& u, const auto& v) {
//             return u[1] < v[1];
//        });
//
//
//		int count = 1;
//		int right = intervals[0][1];
//		for (int i = 1; i < intervals.size(); i++) {
//			if (intervals[i][0] >= right) {
//				count++;
//				right = intervals[i][1];
//			}
//		}
//		return intervals.size() - count;
//	}
//};
//
////test
//int main() {
//
//	vector<vector<int>> intervals = { {1,2},{2,3},{3,4},{1,3} };
//	Solution s;
//	int cou = s.eraseOverlapIntervals(intervals);
//	cout << cou << endl;
//
//	system("pause");
//	return 0;
//}
//
//
//
//
//
////
////给定一个区间的集合 intervals ，其中 intervals[i] = [starti, endi] 。返回 需要移除区间的最小数量，使剩余区间互不重叠 。
////
//// 
////
////示例 1:
////
////输入: intervals = [[1,2],[2,3],[3,4],[1,3]]
////输出: 1
////解释: 移除 [1,3] 后，剩下的区间没有重叠。
////
////示例 2:
////
////输入: intervals = [ [1,2], [1,2], [1,2] ]
////输出: 2
////解释: 你需要移除两个 [1,2] 来使剩下的区间没有重叠。
////
////示例 3:
////
////输入: intervals = [ [1,2], [2,3] ]
////输出: 0
////解释: 你不需要移除任何区间，因为它们已经是无重叠的了。
////
////来源：力扣（LeetCode）
////链接：https://leetcode.cn/problems/non-overlapping-intervals
////著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。