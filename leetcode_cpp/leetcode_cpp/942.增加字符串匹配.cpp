//#include <iostream>
//#include <vector>
//using namespace std;
//
////��I����С��
////��D�������
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
////�ɷ�Χ[0, n] ������������ɵ� n + 1 ���������������п��Ա�ʾΪ����Ϊ n ���ַ��� s ������ :
////
////��� perm[i] < perm[i + 1] ����ô s[i] == 'I'
////	��� perm[i] > perm[i + 1] ����ô s[i] == 'D'
////
////	����һ���ַ��� s ���ع����� perm ��������������ж����Ч����perm���򷵻����� �κ�һ��
////
////	ʾ�� 1��
////
////	���룺s = "IDID"
////	�����[0, 4, 1, 3, 2]
////
////	ʾ�� 2��
////
////	���룺s = "III"
////	�����[0, 1, 2, 3]
////
////	ʾ�� 3��
////
////	���룺s = "DDI"
////	�����[3, 2, 0, 1]