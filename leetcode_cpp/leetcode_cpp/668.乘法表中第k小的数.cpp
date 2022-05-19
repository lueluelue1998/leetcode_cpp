//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//
//class Solution {
//public:
//    int findKthNumber(int m, int n, int k) {
//        //二分查找   计算不超过x的数字有多少个
//        int left = 0;
//        int right = m * n;
//        while (left < right) {//退出条件是 left = right ？
//            int x = left + (right - left) / 2;
//            int count = 0;//每次进来都重新计算
//            count += x / n * n;
//            for (int i = x / n + 1; i <= m; i++) {
//                count += x / i;
//            }
//            //count为不超过x的数字
//            if (count >= k) {
//                right = x;
//            }else{
//                left = x + 1;
//            }
//        }
//        return left;
//    }
//};
//
//
//
////class Solution {
////public:
////    int findKthNumber(int m, int n, int k) {
////
////        //暴力
////        vector<int> vec(m * n);
////        int index = 0;
////            for (int i = 1; i <= m; i++) {
////                for (int j = 1; j <= n; j++) {
////                    vec[index++]=(i* j);
////                }
////            }
////        
////
////        sort(vec.begin(), vec.end());
////        return vec[k-1];
////    }
////};
//
////test
//int main() {
//
//    int m = 3;
//    int n = 3;
//    Solution s;
//    int ans = s.findKthNumber(3, 3, 5);
//
//	cout << ans << endl;
//
//	system("pause");
//	return 0;
//}
//
