//
//#include <iostream>
//using namespace std;
//
//
//
//
//
// struct TreeNode {
//        int val;
//         TreeNode *left;
//         TreeNode *right;
//         TreeNode() : val(0), left(nullptr), right(nullptr) {}
//         TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//          TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  };
//
// //遍历
//class Solution {
//public:
//    TreeNode* invertTree(TreeNode* root) {
//        if (root == nullptr)return nullptr;
//
//        TreeNode* leftNode = invertTree(root->left);
//        TreeNode* rightNode = invertTree(root->right);
//        TreeNode* temp = root->left;
//        root->left = root->right;
//        root->right = temp;
//        return root;
//    }
//        
//};
//
////分解问题
//class Solution {
//public:
//    TreeNode* invertTree(TreeNode* root) {
//        if (root == nullptr)return nullptr;
//
//        TreeNode* leftNode = invertTree(root->left);
//        TreeNode* rightNode = invertTree(root->right);
//
//        root->left = rightNode;
//        root->right = leftNode;
//        return root;
//    }
//
//};
//
//
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
