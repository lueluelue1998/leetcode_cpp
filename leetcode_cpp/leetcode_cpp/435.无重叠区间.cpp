//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
////��̬�滮
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
////���ߣ�LeetCode - Solution
////���ӣ�https ://leetcode.cn/problems/non-overlapping-intervals/solution/wu-zhong-die-qu-jian-by-leetcode-solutio-cpsb/
////��Դ�����ۣ�LeetCode��
////����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������
//
//
////̰���㷨
//class Solution {
//public:
//	int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//
//		if (intervals.size() == 0) {
//			return 0;
//		}
//
//		//sort(intervals.begin(), intervals.end(), [](const vector<int> &a,const vector<int> &b){
//		//	return a[1] < b[1];//�ұ߽�С����ǰ
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
////����һ������ļ��� intervals ������ intervals[i] = [starti, endi] ������ ��Ҫ�Ƴ��������С������ʹʣ�����以���ص� ��
////
//// 
////
////ʾ�� 1:
////
////����: intervals = [[1,2],[2,3],[3,4],[1,3]]
////���: 1
////����: �Ƴ� [1,3] ��ʣ�µ�����û���ص���
////
////ʾ�� 2:
////
////����: intervals = [ [1,2], [1,2], [1,2] ]
////���: 2
////����: ����Ҫ�Ƴ����� [1,2] ��ʹʣ�µ�����û���ص���
////
////ʾ�� 3:
////
////����: intervals = [ [1,2], [2,3] ]
////���: 0
////����: �㲻��Ҫ�Ƴ��κ����䣬��Ϊ�����Ѿ������ص����ˡ�
////
////��Դ�����ۣ�LeetCode��
////���ӣ�https://leetcode.cn/problems/non-overlapping-intervals
////����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������