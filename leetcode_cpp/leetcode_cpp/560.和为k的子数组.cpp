//#include <iostream>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//
//class Solution {
//public:
//	vector<int> preSum;
//
//	//超时	
//	//int subarraySum(vector<int> nums,int k) {
//	//	int size = nums.size();
//	//	preSum.resize(size+1);
//	//	//preSum[i+1]存前i 的前缀和
//	//	for (int i = 0; i < size; i++) {
//	//		preSum[i + 1] = preSum[i] + nums[i];
//	//	}
//	//	//双指针
//	//	int ans = 0;
//	//	//j从0开始  要把元素本身算进去
//	//	for (int i = 1; i < size + 1; i++) {
//	//		for (int j = 0; j < i; j++) {
//	//			if (preSum[i] - preSum[j] == k)
//	//				ans++;
//	//		}
//	//	}
//	//	return ans;
//	//}
//	
//
//	//借用哈希表 避免内层循环
//	int subarraySum(vector<int> nums, int k) {
//		int size = nums.size();
//		preSum.resize(size + 1);
//		unordered_map<int, int> map;
//		int ans = 0;
//
//		//初始化
//		map[0] = 1;
//
//
//
//		//preSum[i+1]存前i 的前缀和
//		for (int i = 0; i < size; i++) {
//			preSum[i + 1] = preSum[i] + nums[i];
//			int temp = preSum[i + 1];
//			//要找的前缀和
//			int pre = preSum[i + 1] - k;
//			////前面有这个前缀和，ans加上这个前缀和出现的次数
//			if (map.count(pre)) {
//				ans += map[pre];
//			}
//			////处理当前前缀和
//			if (map.count(preSum[i + 1])) {
//				map[preSum[i + 1]]++;
//			}else {
//				//map.insert(pair<int,int>(preSum[i + 1],1));
//				map[preSum[i + 1]] = 1;
//			}
//
//
//		}
//
//		return ans;
//	}
//	
//
//
//};
//
////test
//int main() {
//
//	vector<int> nums = { 1,2,3 };
//	int k = 3;
//	Solution s;
//	int ans = s.subarraySum(nums, k);
//
//	cout << ans << endl;
//
//	system("pause");
//	return 0;
//}