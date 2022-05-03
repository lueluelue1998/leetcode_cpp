#include <iostream>
#include <vector>

using namespace std;


//二向图 在建图是，双向关系都要建立
//编号从1到n

class Solution {
public:

	vector<vector<int>> graph;

	bool ans = true;



	void buildGraph(int n, vector<vector<int>>& dislikes) {
		
		graph.resize(n+1);

		int m = dislikes.size();

		for (int i = 0; i < m; i++) {
			graph[dislikes[i][0]].push_back(dislikes[i][1]);
			graph[dislikes[i][1]].push_back(dislikes[i][0]);
		}

	}



    //第i个节点
    void traverse(vector<vector<int>>& graph , int i , vector<bool> & visited , vector<bool>& color) {

        //无法二分，结束遍历
        if (ans == false) {
            return;
        }

        visited[i] = true;

        for (int j : graph[i]) {
            //没遍历过
            if (!visited[j]) {
                color[j] = !color[i];
                traverse(graph, j, visited, color);
            }
            else {//遍历过
                if (color[j] == color[i]) {
                    ans = false;
                }
            }
        }          
        
	}



	bool possibleBipartition(int n, vector<vector<int>>& dislikes) {

		buildGraph(n, dislikes);


		        int nums = graph.size();
		
		        //记录遍历过的点
		        vector<bool> visited(n+1);
		        //记录点的颜色
		        vector<bool> color(n+1);
		
		
		
		        for (int i = 0; i < n+1; i++) {
		
		            if (!visited[i]) {
		                traverse(graph, i, visited, color);
		            }
		        }
		        return ans;
	}


};




//test
int main() {

	int n = 4;
	vector<vector<int>> dislikes = { {1,2},{1,3},{2,4} };

	Solution s;
	int ans = s.possibleBipartition(n,dislikes);

	cout << ans<< endl;

	system("pause");
	return 0;
}


//给定一组 n 人（编号为 1, 2, ..., n）， 我们想把每个人分进任意大小的两组。每个人都可能不喜欢其他人，那么他们不应该属于同一组。
//
//给定整数 n 和数组 dislikes ，其中 dislikes[i] = [ai, bi] ，表示不允许将编号为 ai 和  bi的人归入同一组。
// 当可以用这种方法将所有人分进两组时，返回 true；否则返回 false。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/possible-bipartition
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。