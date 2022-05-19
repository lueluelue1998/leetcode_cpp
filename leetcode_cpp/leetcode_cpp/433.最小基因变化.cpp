//#include <iostream>
//#include <vector>
//#include <unordered_set>
//#include <queue>
//using namespace std;
//
//
//
////BFS
//class Solution {
//public:
//	int minMutation(string start, string end, vector<string>& bank) {
//		unordered_set<string> visited;
//		unordered_set<string> cnt;
//		if (start == end) {
//			return 0;
//		}
//		for (int i = 0; i < bank.size(); i++) {
//			cnt.emplace(bank[i]);
//		}
//		queue<string> qu;
//		qu.emplace(start);
//		visited.emplace(start);
//		int step = 1;
//		char key[4] = { 'A','C','G','T' };
//		while (!qu.empty()) {
//			int size = qu.size();
//			for (int i = 0; i < size; i++) {
//				string cur = qu.front();
//				qu.pop();
//				for (int j = 0; j < 8; j++) {
//					for (int k = 0; k < 4; k++) {
//						if (key[k] != cur[j]) {
//							string next = cur;
//							next[j] = key[k];
//
//							if (!visited.count(next) && cnt.count(next)) {
//								if (next == end) {
//									return step;
//								}
//								qu.emplace(next);
//								visited.emplace(next);
//							}
//						}
//					}
//				}
//			}
//			step++;
//		}
//		return -1;
//	}
//};
//
////test
//int main() {
//
//	cout << "hello world!" << endl;
//
//	system("pause");
//	return 0;
//}
////
////�������п��Ա�ʾΪһ���� 8 ���ַ���ɵ��ַ���������ÿ���ַ����� 'A'��'C'��'G' �� 'T' ֮һ��
////
////����������Ҫ����ӻ������� start ��Ϊ end �������Ļ���仯��һ�λ���仯����ζ��������������е�һ���ַ������˱仯��
////
////���磬"AACCGGTT" -- > "AACCGGTA" ����һ�λ���仯��
////
////����һ������� bank ��¼��������Ч�Ļ���仯��ֻ�л�����еĻ��������Ч�Ļ������С�
////
////���������������� start �� end ���Լ�һ������� bank �������ҳ��������ܹ�ʹ start �仯Ϊ end ��������ٱ仯������
//// ����޷���ɴ˻���仯������ - 1 ��
////
////ע�⣺��ʼ�������� start Ĭ������Ч�ģ�����������һ��������ڻ�����С�
////
////
////
////ʾ�� 1��
////
////���룺start = "AACCGGTT", end = "AACCGGTA", bank = ["AACCGGTA"]
////�����1
////
////ʾ�� 2��
////
////���룺start = "AACCGGTT", end = "AAACGGTA", bank = ["AACCGGTA", "AACCGCTA", "AAACGGTA"]
////�����2
////
////ʾ�� 3��
////
////���룺start = "AAAAACCC", end = "AACCCCCC", bank = ["AAAACCCC", "AAACCCCC", "AACCCCCC"]
////�����3
////
