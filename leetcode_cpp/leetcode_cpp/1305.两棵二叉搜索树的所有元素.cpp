//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//
////¶þ²æËÑË÷Ê÷   ×ó-ÖÐ-ÓÒÉýÐò
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
//
// class Solution {
// public:
//     vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
//
//         vector<int> num1, num2;
//
//         inorder(root1, num1);
//         inorder(root2, num2);
//
//         vector<int> merged;
//         int i = 0, j = 0;
//         while (i < num1.size() || j < num2.size()) {
//             if (i == num1.size()) {
//                 merged.push_back(num2[j++]);
//               /*  break;*/
//             }
//             else if (j == num2.size()) {
//                 merged.push_back(num1[i++]);
//                 /*break;*/
//             }
//             else if (num1[i] <= num2[j]) {
//                 merged.push_back(num1[i++]);
//             }
//             else
//             {
//                 merged.push_back(num2[j++]);
//             }
//         }
//         return merged;
//     }
//
//     void inorder(TreeNode* node, vector<int>& vec) {
//         if (node == nullptr) {
//             return;
//         }
//
//         inorder(node->left, vec);
//         vec.push_back(node->val);
//         inorder(node->right, vec);
//     }
// };
//
//
//
////test
//int main() {
//
//    Solution s;
//    TreeNode* root1 = nullptr;
//
//
//    TreeNode* root2 = new TreeNode(1);
//    root2->left = new TreeNode(0);
//    root2->right = new TreeNode(3);
//
//    vector<int> ans = s.getAllElements(root1, root2);
//    for (vector<int>::iterator it = ans.begin(); it < ans.end(); it++) {
//        cout <<*it  << endl;
//    }
//    
//
//    system("pause");
//    return 0;
//}
