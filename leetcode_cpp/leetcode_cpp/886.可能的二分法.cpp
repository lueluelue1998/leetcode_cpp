//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
////����ͼ �ڽ�ͼ�ǣ�˫���ϵ��Ҫ����
////��Ŵ�1��n
//
//class Solution {
//public:
//
//	vector<vector<int>> graph;
//
//	bool ans = true;
//
//
//
//	void buildGraph(int n, vector<vector<int>>& dislikes) {
//		
//		graph.resize(n+1);
//
//		int m = dislikes.size();
//
//		for (int i = 0; i < m; i++) {
//			graph[dislikes[i][0]].push_back(dislikes[i][1]);
//			graph[dislikes[i][1]].push_back(dislikes[i][0]);
//		}
//
//	}
//
//
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
//	}
//
//
//
//	bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
//
//		buildGraph(n, dislikes);
//
//
//		        int nums = graph.size();
//		
//		        //��¼�������ĵ�
//		        vector<bool> visited(n+1);
//		        //��¼�����ɫ
//		        vector<bool> color(n+1);
//		
//		
//		
//		        for (int i = 0; i < n+1; i++) {
//		
//		            if (!visited[i]) {
//		                traverse(graph, i, visited, color);
//		            }
//		        }
//		        return ans;
//	}
//
//
//};
//
//
//
//
////test
//int main() {
//
//	int n = 4;
//	vector<vector<int>> dislikes = { {1,2},{1,3},{2,4} };
//
//	Solution s;
//	int ans = s.possibleBipartition(n,dislikes);
//
//	cout << ans<< endl;
//
//	system("pause");
//	return 0;
//}
//
//
////����һ�� n �ˣ����Ϊ 1, 2, ..., n���� �������ÿ���˷ֽ������С�����顣ÿ���˶����ܲ�ϲ�������ˣ���ô���ǲ�Ӧ������ͬһ�顣
////
////�������� n ������ dislikes ������ dislikes[i] = [ai, bi] ����ʾ���������Ϊ ai ��  bi���˹���ͬһ�顣
//// �����������ַ����������˷ֽ�����ʱ������ true�����򷵻� false��
////
////��Դ�����ۣ�LeetCode��
////���ӣ�https ://leetcode-cn.com/problems/possible-bipartition
////����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������