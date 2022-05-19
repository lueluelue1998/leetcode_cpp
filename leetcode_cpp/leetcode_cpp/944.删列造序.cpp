//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//class Solution {
//public:
//    int minDeletionSize(vector<string>& strs) {
//
//        int count = 0;
//
//        int nums = strs.size();
//        int len = strs[0].length();
//
//        for (int j = 0; j < len; j++) {
//            for (int i = 0; i < nums-1; i++) {
//                if (strs[i][j] > strs[i + 1][j]) {
//                    count++;
//                    break;
//                }
//            }
//        }
//        return count;
//    }
//};
//
//
//
//
////test
//int main() {
//
//    Solution s;
//    vector<string> strs = { "zyx","wvu","tsr"};
//    int ans = s.minDeletionSize(strs);
//	cout << ans << endl;
//
//	system("pause");
//	return 0;
//}
