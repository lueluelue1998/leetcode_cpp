//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//
////×ó±ÕÓÒ±Õ
//class Solution {
//public:
//    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
//
//        return build(nums, 0, nums.size());
//
//    }
//    TreeNode* build(vector<int>& nums, int left, int right) {
//        if (left == right) return nullptr;
//        int maxIndex = left;
//        for (int i = left; i < right; i++) {
//
//            if (nums[i] > nums[maxIndex]) {
//                maxIndex = i;
//
//            }
//        }
//        TreeNode* result = new TreeNode(nums[maxIndex]);
//        result->left = build(nums, left, maxIndex);
//        result->right = build(nums, maxIndex + 1, right);
//
//        return result;
//    }
//};
//
//
////test
//int main() {
//
//    Solution s;
//    vector<int> nums = { 3,2,1,6,0,5 };
//    
//    TreeNode* ans = s.constructMaximumBinaryTree(nums);
//	cout << "hello world!" << endl;
//
//	system("pause");
//	return 0;
//}
//
//
//
