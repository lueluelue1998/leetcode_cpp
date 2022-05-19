//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//        int point1 = 0;
//        int point2 = 0;
//        int m = nums1.size();
//        int n = nums2.size();
//        int mid = (m + n) / 2;
//        int index = 0;
//        vector<int> merged(m + n);
//        while (point1 < m || point2 < n) {
//            if (point1 == m ) {
//                merged[index++] = nums2[point2++];
//
//            }
//            else if (point2 == n ) {
//                merged[index++] = nums1[point1++];
//            }
//            else if (nums1[point1] <= nums2[point2]) {
//                merged[index++] = nums1[point1++];
//            }
//            else {
//                merged[index++] = nums2[point2++];
//            }
//
//            if (index > mid + 1) break;
//
//
//        }
//        if ((m + n) % 2 == 1) return merged[mid];
//        else    return (double(merged[mid - 1]) + merged[mid ]) / 2;
//    }
//};
//
////test
//int main() {
//
//    vector<int> nums1 = { 1,2 };
//    vector<int> nums2 = { 3,4 };
//    Solution s;
//    double ans = s.findMedianSortedArrays(nums1, nums2);
//
//	cout << ans<< endl;
//
//	system("pause");
//	return 0;
//}
