//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//
//class NumArray {
//public:
//    vector<int> sums;
//
//    NumArray(vector<int>& nums) {
//        int size = nums.size();
//        int temp = 0;
//        //ǰ׺�͵�һλ��0   ����ұ�����
//        sums.push_back(0);
//        for (int i = 0; i < size; i++) {
//            temp += nums[i];
//            sums.push_back(temp);
//        }
//    }
//
//    int sumRange(int left, int right) {
//        return sums[right+1] - sums[left];
//    }
//};
//
//
////test
//int main() {
//
//    vector<int> a = { 1,2,3,4 };
//    NumArray nums(a);
//    cout << nums.sumRange(0, 2) << endl;
//
//	system("pause");
//	return 0;
//}