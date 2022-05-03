//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//class Solution {
//public:
//
//    bool ans = true;
//
//    //��i���ڵ�
//    void traverse(vector<vector<int>>& graph , int i , vector<bool> & visited , vector<bool>& color) {
//
//        //�޷����֣���������
//        if (ans == false) {
//            return;
//        }
//
//        visited[i] = true;
//
//        for (int j : graph[i]) {
//            //û������
//            if (!visited[j]) {
//                color[j] = !color[i];
//                traverse(graph, j, visited, color);
//            }
//            else {//������
//                if (color[j] == color[i]) {
//                    ans = false;
//                }
//            }
//        }
//           
//        
//
//    }
//
//    bool isBipartite(vector<vector<int>>& graph) {
//
//
//
//        int nums = graph.size();
//
//        //��¼�������ĵ�
//        vector<bool> visited(nums);
//        //��¼�����ɫ
//        vector<bool> color(nums);
//
//
//
//        for (int i = 0; i < nums; i++) {
//
//            if (!visited[i]) {
//                traverse(graph, i, visited, color);
//            }
//        }
//        return ans;
//    }
//};
//
//
//
//
//
//
//
//
//int main() {
//
//    Solution s;
//    vector<vector<int>> graph = { {1,2,3}, { 0, 2 } , {0, 1 ,3 }, {0, 2 } };
//    bool ans =  s.isBipartite(graph);
//    cout << ans << endl;
//
//
//	return 0;
//}
//
//
////����һ�� ����ͼ ��ͼ���� n ���ڵ㡣����ÿ���ڵ㶼��һ������ 0 �� n - 1 ֮���Ψһ��š�
//// ����һ����ά���� graph ������ graph[u] ��һ���ڵ����飬�ɽڵ� u ���ڽӽڵ���ɡ�
//// ��ʽ�ϣ����� graph[u] �е�ÿ�� v ��������һ��λ�ڽڵ� u �ͽڵ� v ֮�������ߡ�������ͼͬʱ�����������ԣ�
////
////�������Ի���graph[u] ������ u����
////������ƽ�бߣ�graph[u] �������ظ�ֵ����
////��� v �� graph[u] �ڣ���ô u ҲӦ���� graph[v] �ڣ���ͼ������ͼ��
////���ͼ���ܲ�����ͨͼ��Ҳ����˵�����ڵ� u �� v ֮����ܲ�����һ����ͨ�˴˵�·����
////
////����ͼ ���壺����ܽ�һ��ͼ�Ľڵ㼯�Ϸָ�������������Ӽ� A �� B ����ʹͼ�е�ÿһ���ߵ������ڵ�һ������ A ���ϣ�һ������ B ���ϣ��ͽ����ͼ��Ϊ ����ͼ ��
////
////��Դ�����ۣ�LeetCode��
////���ӣ�https ://leetcode-cn.com/problems/is-graph-bipartite
////����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������