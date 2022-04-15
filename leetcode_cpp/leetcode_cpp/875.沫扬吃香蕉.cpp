//#include <iostream>
//#include <queue>
//#include <unordered_set>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//
//
////**二分查找转化为判定问题
////注意初始值 left=1，right=max_i
//
//
//class Solution {
//public:
//    int minEatingSpeed(vector<int>& piles, int h) {
//        int max_i=0;
//        for (vector<int>::iterator it = piles.begin(); it < piles.end(); it++) {
//            if (*it >= max_i) {
//                max_i = *it;
//            }
//        }
//        int left = 1, right = max_i;
//        while (left<=right)
//        {
//            int mid = left + (right - left) / 2;
//            if (isPossible(piles, h, mid)) {
//                right = mid - 1;
//            }
//            else {
//                left = mid + 1;
//            }
//        }
//        return left;
//
//    }
//    bool isPossible(vector<int> piles, int h,int K) {
//        int time = 0;
//        for (auto p : piles) {
//            time += (p - 1) / K + 1;
//        }
//        return time <= h;
//    }
//};
//
//
////test
//int main() {
//
//    vector<int>piles = { 312884470 };
//    int h = 968709470;
//    Solution s;
//    int ans = s.minEatingSpeed(piles, h);
//
//      cout << ans << endl;
//
//    system("pause");
//    return 0;
//}