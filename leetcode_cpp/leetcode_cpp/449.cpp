//#include <iostream>
//#include<string>
//#include "449.h"
//using namespace std;
//
//
//
//
// struct TreeNode {
//        int val;
//         TreeNode *left;
//         TreeNode *right;
//         TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  };
//
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// * };
// */
//
//
//
// //前序遍历
//
//class Codec {
//public:
//
//
//    void bianli(string ans, TreeNode* root) {
//
//        if (root == nullptr) {
//            return;
//        }
//
//        //前序遍历
//        ans += root->val;
//        ans += ",";
//        if (root->left != nullptr) {
//            bianli(ans, root->left);
//        }
//
//        if (root->right != nullptr) {
//            bianli(ans, root->right);
//        }
//
//    }
//
//
//
//    // Encodes a tree to a single string.
//    string serialize(TreeNode* root) {
//        string ans;
//        bianli(ans, root);
//
//        return ans;
//    }
//
//    // Decodes your encoded data to tree.
//    TreeNode* deserialize(string data) {
//
//        int len = data.length();
//
//        string num;
//        int idx = 0;
//        while (idx < len && data[idx] != ',') {
//            num += data[idx];
//            idx++;
//        }
//
//        if (num == "null") {
//            return nullptr;
//        }
//        TreeNode* root = new TreeNode(stoi(num));
//        root->left = deserialize(data);
//        root->right = deserialize(data);
//        return root;
//
//    }
//};
//
//// Your Codec object will be instantiated and called as such:
//// Codec* ser = new Codec();
//// Codec* deser = new Codec();
//// string tree = ser->serialize(root);
//// TreeNode* ans = deser->deserialize(tree);
//// return ans;
//
//
//
////test
//int main() {
//
//    TreeNode* root = new TreeNode(2);
//
//    root->val = 2;
//    root->left = new TreeNode(1);
//    root->right = new TreeNode(3);
//
//    Codec c;
//    string ans = c.serialize(root);
//
//
//    cout << ans << endl;
//
//    system("pause");
//    return 0;
//}