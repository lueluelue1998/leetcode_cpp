//#include <iostream>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
////����һ���������� nums ����Ҫ�󷵻�һ�������� counts ������ counts �и����ʣ� counts[i] ��ֵ��  nums[i] �Ҳ�С�� nums[i] ��Ԫ�ص�������
//
////���룺nums = [5, 2, 6, 1]
////�����[2, 1, 1, 0]
////���ͣ�
////5 ���Ҳ��� 2 ����С��Ԫ��(2 �� 1)
////2 ���Ҳ���� 1 ����С��Ԫ��(1)
////6 ���Ҳ��� 1 ����С��Ԫ��(1)
////1 ���Ҳ��� 0 ����С��Ԫ��
//
//
//
////�鲢���򡪡��������
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
//		//����λ��
//		merge(left,right,mid, arr);
//	}
//
//
//	//˫ָ��  ���������������
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
//				// ���� count ����
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
