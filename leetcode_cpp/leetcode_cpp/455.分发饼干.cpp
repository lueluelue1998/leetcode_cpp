//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//
////假设你是一位很棒的家长，想要给你的孩子们一些小饼干。但是，每个孩子最多只能给一块饼干。
//// 
////对每个孩子 i，都有一个胃口值 g[i]，这是能让孩子们满足胃口的饼干的最小尺寸；
////并且每块饼干 j，都有一个尺寸 s[j] 。如果 s[j] >= g[i]，我们可以将这个饼干 j 分配给孩子 i ，
////这个孩子会得到满足。你的目标是尽可能满足越多数量的孩子，并输出这个最大数值。
//
//
//class Solution {
//
//public:
//	int findMaxNum(vector<int> eatSize, vector<int> pieSize) {
//
//		int ans = 0;
//		//将两个容器排序
//		sort(eatSize.begin(),eatSize.end());
//		sort(pieSize.begin(), pieSize.end());
//
//		int index = pieSize.size() - 1;//饼干数组下标
//		for (int i = eatSize.size() - 1; i >= 0; i--) {
//			if (index >= 0 && pieSize[index] >= eatSize[i]) {
//				ans++;
//				index--;
//			}
//		}
//
//
//		return ans;
//	}
//
//};
//
//
//int main() {
//
//	vector<int> g = { 1,2 };
//	vector<int> s = { 1,2, 3 };
//	Solution solu;
//	int ans = solu.findMaxNum(g, s);
//	cout << ans << endl;
//	return 1;
//}