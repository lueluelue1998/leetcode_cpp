//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//
////��������һλ�ܰ��ļҳ�����Ҫ����ĺ�����һЩС���ɡ����ǣ�ÿ���������ֻ�ܸ�һ����ɡ�
//// 
////��ÿ������ i������һ��θ��ֵ g[i]���������ú���������θ�ڵı��ɵ���С�ߴ磻
////����ÿ����� j������һ���ߴ� s[j] ����� s[j] >= g[i]�����ǿ��Խ�������� j ��������� i ��
////������ӻ�õ����㡣���Ŀ���Ǿ���������Խ�������ĺ��ӣ��������������ֵ��
//
//
//class Solution {
//
//public:
//	int findMaxNum(vector<int> eatSize, vector<int> pieSize) {
//
//		int ans = 0;
//		//��������������
//		sort(eatSize.begin(),eatSize.end());
//		sort(pieSize.begin(), pieSize.end());
//
//		int index = pieSize.size() - 1;//���������±�
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