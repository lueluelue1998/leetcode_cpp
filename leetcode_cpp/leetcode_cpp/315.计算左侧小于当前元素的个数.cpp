//#include <iostream>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
////给你一个整数数组 nums ，按要求返回一个新数组 counts 。数组 counts 有该性质： counts[i] 的值是  nums[i] 右侧小于 nums[i] 的元素的数量。
//
////输入：nums = [5, 2, 6, 1]
////输出：[2, 1, 1, 0]
////解释：
////5 的右侧有 2 个更小的元素(2 和 1)
////2 的右侧仅有 1 个更小的元素(1)
////6 的右侧有 1 个更小的元素(1)
////1 的右侧有 0 个更小的元素
//
//
//
////归并排序——后序遍历
//class Solution {
//public:
//	unordered_map<int,int> temp;
//	vector<int> count;
//
//	vector<int> countSmaller(vector<int>& nums) {
//		
//		count.resize(nums.size());
//		unordered_map<int, int> arr;
//		for (int i = 0; i < nums.size(); i++) {
//			arr.insert(i, nums[i]);
//		}
//		sort(0, nums.size() - 1, arr);
//
//
//
//	}
//
//	void sort(int left, int right, unordered_map<int, int> arr) {
//
//		if (left == right) {
//			return;
//		}
//
//		int mid = left + (right - left) / 2;
//
//		sort(left, mid, arr);
//		sort( mid+1 , right, arr);
//		//后序位置
//		merge(left,right,mid, arr);
//	}
//
//
//	//双指针  两个有序数组组合
//	void merge(int left, int right, int mid, unordered_map<int, int> arr) {
//		int i = left;
//		int j = mid + 1;
//
//		for (int i = left; i <= right; i++) {
//			temp[i] = arr[i];
//		}
//
//		for (int p = left; p <= right; p++) {
//			if (i = mid + 1) {
//				arr[p] = temp[j++];
//			}else if(j = right+1){
//				arr[p] = temp[i++];
//
//				// 更新 count 数组
//				count[];
//
//			}else if (temp[i] > temp[j]) {
//					arr[p] = temp[j++];
//			}else {
//					arr[p] = temp[i++];
//			}
//		}
//	}
//};
//
//
//	
////test
//int main() {
//
//	cout << "hello world!" << endl;
//
//	system("pause");
//	return 0;
//}
