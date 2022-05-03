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
//    //第i个节点
//    void traverse(vector<vector<int>>& graph , int i , vector<bool> & visited , vector<bool>& color) {
//
//        //无法二分，结束遍历
//        if (ans == false) {
//            return;
//        }
//
//        visited[i] = true;
//
//        for (int j : graph[i]) {
//            //没遍历过
//            if (!visited[j]) {
//                color[j] = !color[i];
//                traverse(graph, j, visited, color);
//            }
//            else {//遍历过
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
//        //记录遍历过的点
//        vector<bool> visited(nums);
//        //记录点的颜色
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
////存在一个 无向图 ，图中有 n 个节点。其中每个节点都有一个介于 0 到 n - 1 之间的唯一编号。
//// 给你一个二维数组 graph ，其中 graph[u] 是一个节点数组，由节点 u 的邻接节点组成。
//// 形式上，对于 graph[u] 中的每个 v ，都存在一条位于节点 u 和节点 v 之间的无向边。该无向图同时具有以下属性：
////
////不存在自环（graph[u] 不包含 u）。
////不存在平行边（graph[u] 不包含重复值）。
////如果 v 在 graph[u] 内，那么 u 也应该在 graph[v] 内（该图是无向图）
////这个图可能不是连通图，也就是说两个节点 u 和 v 之间可能不存在一条连通彼此的路径。
////
////二分图 定义：如果能将一个图的节点集合分割成两个独立的子集 A 和 B ，并使图中的每一条边的两个节点一个来自 A 集合，一个来自 B 集合，就将这个图称为 二分图 。
////
////来源：力扣（LeetCode）
////链接：https ://leetcode-cn.com/problems/is-graph-bipartite
////著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。