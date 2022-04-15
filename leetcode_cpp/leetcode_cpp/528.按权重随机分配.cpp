//#include <iostream>
//#include <queue>
//#include <unordered_set>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//
//    Solution();
//    //前缀和数组
//    vector<int> preSum;
//    Solution(vector<int>& w) {
//        int n = w.size();
//        preSum.resize(n + 1);
//        preSum[0] = 0;
//        for (int i = 1; i <= n; i++) {
//            preSum[i] = preSum[i - 1] + w[i - 1];
//        }
//    }
//
//    int pickIndex() {
//        int m = preSum.size();
//        //随机选一个数字
//        int target = rand()% (preSum[m - 1] )+1;
//        return left_bound(preSum,target)-1;
//    }
//
//    //找左边界
//    int left_bound(vector<int>v , int tar) {
//        int left = 0, right = v.size()-1;
//        while (left<=right)
//        {
//            int mid = left + (right - left) / 2;
//            if (v[mid] < tar) {
//                left = mid + 1;
//            }
//            else if(v[mid]>tar)
//            {
//                right = mid - 1;
//            }
//            else if (v[mid] = tar) {
//                right = mid - 1;
//            }
//        }
//        return left;
//    }
//};
//
//
////test
//int main() {
//
//    vector<int>a = { 1,3 };
//    Solution(a);
//
//
//  //  cout << ans << endl;
//
//    system("pause");
//    return 0;
//}