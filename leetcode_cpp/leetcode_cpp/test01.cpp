//#include <iostream>
//using namespace std;
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



// struct TreeNode {
//        int val;
//         TreeNode *left;
//         TreeNode *right;
//         TreeNode() : val(0), left(nullptr), right(nullptr) {}
//         TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//          TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  };


// �������鹹�������
//TreeNode* construct_binary_tree(const vector<int>& vec) {
//    vector<TreeNode*> vecTree(vec.size(), NULL);
//    TreeNode* root = NULL;
//    // ��������ֵ���飬��ת��Ϊ�������ڵ�����
//    for (int i = 0; i < vec.size(); i++) {
//        TreeNode* node = NULL;
//        if (vec[i] != -1) node = new TreeNode(vec[i]); // �� -1 ��ʾnull
//        vecTree[i] = node;
//        if (i == 0) root = node;
//    }
//    // ����һ�飬���ݹ������Һ��Ӹ�ֵ�Ϳ�����
//    // ע������ ���������� i * 2 + 2 < vec.size()�������ָ��
//    for (int i = 0; i * 2 + 2 < vec.size(); i++) {
//        if (vecTree[i] != NULL) {
//            // ���Դ洢ת��ʽ�洢�ؼ��߼�
//            vecTree[i]->left = vecTree[i * 2 + 1];
//            vecTree[i]->right = vecTree[i * 2 + 2];
//        }
//    }
//    return root;
//}





//**δac��Ŀ
//2-315   449


//**ac�� ��û��ȫ����Ŀ
//9 - 528    



//ͬ���� ��ʱδ����Ŀ
//10-889


//������Ŀ
//1728