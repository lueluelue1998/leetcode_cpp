//#include <iostream>
//#include <vector>
//using namespace std;
//
////遇I放最小数
////遇D放最大数
//
//
//
//class Solution {
//public:
//	vector<int> diStringMatch(string s) {
//		
//		int n = s.length();
//		vector<int> ans;
//		int left = 0;
//		int right = n;
//		for (auto element : s) {
//			if (element == 'I') {
//				ans.push_back(left++);
//			}
//			else if (element == 'D')
//			{
//				ans.push_back(right--);
//			}
//		}
//		ans.push_back(left);
//		return ans;
//	}
//};
//
//
//
//
//
////test
//int main() {
//
//	string s = "IDID";
//	Solution solu;
//	vector<int>ans =  solu.diStringMatch(s);
//
//	for (auto i : ans) {
//		cout << i ;
//	}
//	
//
//	system("pause");
//	return 0;
//}
//
//
//
////
////由范围[0, n] 内所有整数组成的 n + 1 个整数的排列序列可以表示为长度为 n 的字符串 s ，其中 :
////
////如果 perm[i] < perm[i + 1] ，那么 s[i] == 'I'
////	如果 perm[i] > perm[i + 1] ，那么 s[i] == 'D'
////
////	给定一个字符串 s ，重构排列 perm 并返回它。如果有多个有效排列perm，则返回其中 任何一个
////
////	示例 1：
////
////	输入：s = "IDID"
////	输出：[0, 4, 1, 3, 2]
////
////	示例 2：
////
////	输入：s = "III"
////	输出：[0, 1, 2, 3]
////
////	示例 3：
////
////	输入：s = "DDI"
////	输出：[3, 2, 0, 1]