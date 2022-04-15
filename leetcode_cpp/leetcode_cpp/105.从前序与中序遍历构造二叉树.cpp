//#include <iostream>
//#include <vector>
//#include <unordered_map>
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
//class Solution {
//public:
//    unordered_map<int, int>map;
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        int m = preorder.size();
//        int n = inorder.size();
//
//        for (int i = 0; i < n; i++) {
//            map[inorder[i]] = i;
//        }
//        return build(preorder, 0, m - 1, inorder, 0, n - 1);
//
//    }
//    TreeNode* build(vector<int>& preorder, int preLeft, int preRight,
//        vector<int>& inorder, int inLeft, int inRight) {
//        if (preLeft > preRight || inLeft > inRight) {
//            return nullptr;
//        }
//        TreeNode* ans = new TreeNode(preorder[preLeft]);
//        int index = map[preorder[preLeft]];
//        //中序数组中的长度
//        int inSize = index - inLeft;
//        ans->left = build(preorder, preLeft + 1, preLeft + inSize,
//            inorder, inLeft, index - 1);
//        ans->right = build(preorder, preLeft + inSize + 1, preRight,
//            inorder, index + 1, inRight);
//        return ans;
//
//    }
//};
//
//
////test
//int main() {
//
//    Solution s;
//    vector<int> pre = { 3,9,20,15,7 };
//    vector<int> inorder = { 9,3,15,20,7 };
//    s.buildTree(pre, inorder);
//    cout << "hello world!" << endl;
//
//    system("pause");
//    return 0;
//}
//
//
//
