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
//	//��ʱ	
//	//int subarraySum(vector<int> nums,int k) {
//	//	int size = nums.size();
//	//	preSum.resize(size+1);
//	//	//preSum[i+1]��ǰi ��ǰ׺��
//	//	for (int i = 0; i < size; i++) {
//	//		preSum[i + 1] = preSum[i] + nums[i];
//	//	}
//	//	//˫ָ��
//	//	int ans = 0;
//	//	//j��0��ʼ  Ҫ��Ԫ�ر������ȥ
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
//	//���ù�ϣ�� �����ڲ�ѭ��
//	int subarraySum(vector<int> nums, int k) {
//		int size = nums.size();
//		preSum.resize(size + 1);
//		unordered_map<int, int> map;
//		int ans = 0;
//
//		//��ʼ��
//		map[0] = 1;
//
//
//
//		//preSum[i+1]��ǰi ��ǰ׺��
//		for (int i = 0; i < size; i++) {
//			preSum[i + 1] = preSum[i] + nums[i];
//			int temp = preSum[i + 1];
//			//Ҫ�ҵ�ǰ׺��
//			int pre = preSum[i + 1] - k;
//			////ǰ�������ǰ׺�ͣ�ans�������ǰ׺�ͳ��ֵĴ���
//			if (map.count(pre)) {
//				ans += map[pre];
//			}
//			////����ǰǰ׺��
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