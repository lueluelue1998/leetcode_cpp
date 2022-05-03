//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//
//class Solution {
//public:
//	vector<vector<int>> graph;
//	vector<bool>visited;
//	vector<bool>onPath;
//	bool hasCycle = false;
//	bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
//		buildGraph(numCourses,prerequisites);
//
//		visited.resize(numCourses);
//		onPath.resize(numCourses);
//
//		//遍历图中所有节点
//		for (int i = 0; i < numCourses; i++) {
//			traverse(i);
//		}
//		return !hasCycle;
//
//	}
//
//	void traverse(int i) {
//		//这个点在路径上——有环
//		if (onPath[i]) {
//			hasCycle = true;
//			return;
//		}
//		//这个点遍历过
//		if (visited[i]) {
//			return;
//		}
//		onPath[i] = true;
//		visited[i] = true;
//		for (auto t:graph[i]) {
//			traverse(t);
//		}
//		//后序遍历位置
//		onPath[i] = false;
//
//	}
//
//	void buildGraph(int numCourses,vector<vector<int>>& prerequisites) {
//		int n = prerequisites.size();
//		graph.resize(numCourses);
//		for (int i = 0; i < n; i++) {
//			graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
//		}
//	}
//};
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