//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//
//// class Solution {
//// public:
////     int minMoves2(vector<int>& nums) {
////         //找中位数
////         int n=nums.size();
////         int ans=0;
////         sort(nums.begin(),nums.end());
////         for(int i=0;i<n;i++){
////             if(i<n/2){
////                 ans+=nums[n/2]-nums[i];
////             }else{
////                 ans+=nums[i]-nums[n/2];
////             }
////         }
////         return ans;
////     }
//// };
//
////快排版本
//class Solution {
//public:
//    //返回第index小的值
//    int getMid(vector<int>& nums, int left, int right, int index) {
//        int pivot = nums[left];
//        int i = left + 1, j = right;
//        while (i <= j) {
//            while (i < right && nums[i] <= pivot) {
//                i++;
//            }
//            while (j > left && nums[j] > pivot) {
//                j--;
//            }
//            if (i >= j) break;
//            swap(nums[i], nums[j]);
//        }
//        swap(nums[left], nums[j]);
//        if (j == index) return nums[j];
//        else if (j < index) return getMid(nums, j + 1, right, index);
//        else return getMid(nums, left, j - 1, index);
//    }
//
//
//    int minMoves2(vector<int>& nums) {
//        //找中位数 找第n/2小的元素
//
//        int n = nums.size();
//        int ans = 0;
//        // sort(nums.begin(),nums.end());
//        int k = getMid(nums, 0, n - 1, n / 2);
//
//
//        for (int i = 0; i < n; i++) {
//            ans += abs(nums[i] - k);
//        }
//        return ans;
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
//    vector<int> nums = { 1,2,3 };
//    s.minMoves2(nums);
//    cout << "hello world!" << endl;
//
//    system("pause");
//    return 0;
//}