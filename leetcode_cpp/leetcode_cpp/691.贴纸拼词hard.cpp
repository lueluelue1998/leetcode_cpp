//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//
//
////���仯���� + ״̬ѹ��  ����������
//
//
////class Solution {
////public:
////
////	int fun1(vector<string>& stickers, string target, vector<int>& dp, int mask) {
////
////		int m = target.length();
////		if (dp[mask] != -1) {
////			return dp[mask];
////		}
////		dp[mask] = m + 1;
////		for (auto& sticker : stickers) {
////			int left = mask;
////			vector<int> cnt(26);
////			for (char& c : sticker) {
////				cnt[c - 'a']++;
////			}
////			for (int i = 0; i < m; i++) {
////				if ((mask >> i & 1) && cnt[target[i] - 'a'] > 0) {
////					cnt[target[i] - 'a']--;
////					left ^= 1 << i;
////				}
////			}
////			if (left < mask) {
////				dp[mask] = min(dp[mask], fun1(stickers, target, dp, left) + 1);
////			}
////		}
////		return dp[mask];
////	}
////
////
////	int minStickers(vector<string>& stickers, string target) {
////		int m = target.size();
////		vector<int> dp(1 << m, -1);
////		dp[0] = 0;
////		int res = fun1(stickers, target, dp, (1<<m )-1);
////		return res > m ? -1 : res;
////	}
////};
//
//
//
//
////BFS
//
//class Solution {
//public:
//
//	int minStickers(vector<string>& stickers, string target) {
//
//		int n = target.length();
//
//		vector<int> dp(1 << n);
//		queue<int> qu;
//		qu.push(0);
//		int level = 0;
//		while (!qu.empty()) {
//			int size = qu.size();
//			for (int k = 0; k < size; k++) {
//				int base = qu.front();
//
//				qu.pop();
//
//				//ÿһ�ִ�stickers��ȡ�ַ�
//				for (string s : stickers) {
//					//��ǰ������baseΪ��׼��ʼ��ɢ
//					int state = base;
//
//					vector<int> cnt(26);
//					//ͳ��s�ַ�������ĸ���ֵĴ���
//					for (char c : s) {
//						cnt[c - 'a']++;
//					}
//					//����target�ַ���
//					for (int i = 0; i < n; i++) {
//						char c = target[i];
//						//��ǰ�ַ���s�г�����target���ڵ�λû�б����
//						if (cnt[c - 'a'] != 0 && (state & 1 << i) == 0) {
//							cnt[c - 'a']--;
//							state |= 1 << i;
//						}
//					}
//					//dp[state]��Ϊ0˵�����state�Ѿ������ʹ�
//					if (dp[state] != 0 || state == 0)
//						continue;
//					//��ǰ��state����queue�б��ֵȴ���һ�㵯��
//					qu.push(state);
//					//����ֽ���Ա�ѡ�ã������˸���ֽһ��
//					dp[state] = dp[base] + 1;
//					//��ֹ�����ж�
//					if (state == (1 << n) - 1) {
//						return dp[state];
//					}
//				}
//				level++;
//			}
//
//		}
//		return -1;
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
//	vector<string> stickers = { "with","example","science" };
//	string target =  "thehat" ;
//	Solution s;
//	int ans = s.minStickers(stickers, target);
//	std::cout << ans << endl;
//
//	std::system("pause");
//	return 0;
//}
//
//
