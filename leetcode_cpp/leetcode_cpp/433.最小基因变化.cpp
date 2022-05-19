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
////基因序列可以表示为一条由 8 个字符组成的字符串，其中每个字符都是 'A'、'C'、'G' 和 'T' 之一。
////
////假设我们需要调查从基因序列 start 变为 end 所发生的基因变化。一次基因变化就意味着这个基因序列中的一个字符发生了变化。
////
////例如，"AACCGGTT" -- > "AACCGGTA" 就是一次基因变化。
////
////另有一个基因库 bank 记录了所有有效的基因变化，只有基因库中的基因才是有效的基因序列。
////
////给你两个基因序列 start 和 end ，以及一个基因库 bank ，请你找出并返回能够使 start 变化为 end 所需的最少变化次数。
//// 如果无法完成此基因变化，返回 - 1 。
////
////注意：起始基因序列 start 默认是有效的，但是它并不一定会出现在基因库中。
////
////
////
////示例 1：
////
////输入：start = "AACCGGTT", end = "AACCGGTA", bank = ["AACCGGTA"]
////输出：1
////
////示例 2：
////
////输入：start = "AACCGGTT", end = "AAACGGTA", bank = ["AACCGGTA", "AACCGCTA", "AAACGGTA"]
////输出：2
////
////示例 3：
////
////输入：start = "AAAAACCC", end = "AACCCCCC", bank = ["AAAACCCC", "AAACCCCC", "AACCCCCC"]
////输出：3
////
