//#include <iostream>
//#include <queue>
//using namespace std;
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
// // �������鹹�������
// TreeNode* construct_binary_tree(const vector<int>& vec) {
//     vector<TreeNode*> vecTree(vec.size(), NULL);
//     TreeNode* root = NULL;
//     // ��������ֵ���飬��ת��Ϊ�������ڵ�����
//     for (int i = 0; i < vec.size(); i++) {
//         TreeNode* node = NULL;
//         if (vec[i] != -1) node = new TreeNode(vec[i]); // �� -1 ��ʾnull
//         vecTree[i] = node;
//         if (i == 0) root = node;
//     }
//     // ����һ�飬���ݹ������Һ��Ӹ�ֵ�Ϳ�����
//     // ע������ ���������� i * 2 + 2 < vec.size()�������ָ��
//     for (int i = 0; i * 2 + 2 < vec.size(); i++) {
//         if (vecTree[i] != NULL) {
//             // ���Դ洢ת��ʽ�洢�ؼ��߼�
//             vecTree[i]->left = vecTree[i * 2 + 1];
//             vecTree[i]->right = vecTree[i * 2 + 2];
//         }
//     }
//     return root;
// }
//
//
//class Solution {
//public:
//
//    queue<TreeNode*> que;
//    //�������
//    void inorder(TreeNode* root) {
//        if (root == NULL) {
//            return;
//        }
//
//        inorder(root->left);
//        que.push(root);
//        inorder(root->right);
//        return;
//    }
//
//    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
//        inorder(root);
//        while (!que.empty()) {
//            TreeNode* node = que.front();
//            que.pop();
//            if (node->val == p->val && !que.empty()) {
//                return que.front();
//            }
//
//        }
//        return nullptr;
//    }
//};
//
////test
//int main() {
//
//    vector<int> vec = { 5,3,6,2,4,-1,-1,1,-1 };
//    TreeNode* root = construct_binary_tree(vec);
//    Solution s;
//    TreeNode* p = new TreeNode(6) ;
//
//
//    s.inorderSuccessor(root,p);
//
//    cout << "hello world!" << endl;
//
//    system("pause");
//    return 0;
//}