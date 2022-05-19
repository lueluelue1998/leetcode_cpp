//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//
//
////记忆化搜索 + 状态压缩  ——看不懂
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
//				//每一轮从stickers中取字符
//				for (string s : stickers) {
//					//当前层是以base为基准开始扩散
//					int state = base;
//
//					vector<int> cnt(26);
//					//统计s字符串中字母出现的次数
//					for (char c : s) {
//						cnt[c - 'a']++;
//					}
//					//遍历target字符串
//					for (int i = 0; i < n; i++) {
//						char c = target[i];
//						//当前字符在s中出现且target所在的位没有被填充
//						if (cnt[c - 'a'] != 0 && (state & 1 << i) == 0) {
//							cnt[c - 'a']--;
//							state |= 1 << i;
//						}
//					}
//					//dp[state]不为0说明这个state已经被访问过
//					if (dp[state] != 0 || state == 0)
//						continue;
//					//当前的state推入queue中保持等待下一层弹出
//					qu.push(state);
//					//该贴纸可以被选用，即用了该贴纸一次
//					dp[state] = dp[base] + 1;
//					//终止条件判断
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
