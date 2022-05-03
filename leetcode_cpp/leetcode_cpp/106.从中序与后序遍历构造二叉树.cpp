//#include <iostream>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
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
//class Solution {
//public:
//    unordered_map<int, int>map;
//    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//        int m = inorder.size();
//        int n = postorder.size();
//        for (int i = 0; i < m; i++) {
//            map[inorder[i]] = i;
//        }
//        return build(inorder, 0, m - 1, postorder, 0, n - 1);
//    }
//    TreeNode* build(vector<int>& inorder,int inStart,int inEnd,
//                        vector<int>& postorder, int postStart, int postEnd){
//        if (inStart > inEnd)   return nullptr;
//        int rootVal = postorder[postEnd];
//        //节点在中序中的位置
//        int index = map[rootVal];
//        //右子树的长度
//        int rightSize = inEnd - index;
//        //左子树的长度
//        int leftSize = index - inStart;
//        TreeNode* ans = new  TreeNode(rootVal);
//
//        ans->left = build(inorder, inStart, index - 1, postorder, postStart, postStart + leftSize-1);
//        ans->right = build(inorder, index + 1, inEnd, postorder, postStart + leftSize , postEnd - 1);
//        return ans;
//    }
//};
//
////test
//int main() {
//    Solution s;
//    vector<int> inorder = { 9,3,15,20,7 };
//    vector<int> postorder = { 9,15,7,20,3 };
//    s.buildTree(inorder, postorder);
//	cout << "hello world!" << endl;
//
//	system("pause");
//	return 0;
//}
//
//
//
//
