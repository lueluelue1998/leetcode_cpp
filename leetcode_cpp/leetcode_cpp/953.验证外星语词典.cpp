//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//
//class Solution {
//public:
//	bool isAlienSorted(vector<string>& words, string order) {
//		
//		unordered_map<char, int> hashMap;
//
//		for (int i = 0; i < order.size(); i++){
//			hashMap.emplace(order[i], i);
//		}
//		for (int i = 0; i+1 < words.size(); i++) {
//
//			int len = min(words[i].length(),words[i+1].length());
//			for (int j = 0; j < len; j++) {
//
//				if (words[i][j] == words[i + 1][j]) {
//					if ( j == len-1 && words[i].length()>len) {
//						return false;
//					}
//				}else if( hashMap[words[i][j]] < hashMap[words[i + 1][j]]) {
//					break;
//				}
//				else {
//					return false;
//				}
//			}
//		}
//		
//		return true;
//
//	}
//};
//
////test
//int main() {
//
//	vector<string> words = { "hello","leetcode" };
//	string order = "hlabcdefgijkmnopqrstuvwxyz";
//	Solution s;
//	s.isAlienSorted(words, order);
//	cout << "hello world!" << endl;
//
//	system("pause");
//	return 0;
//}
