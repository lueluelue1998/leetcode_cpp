#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
	int minDistance(string word1, string word2) {
		//定义：s1[0..i] 和 s2[0..j] 的最小编辑距离是 dp[i+1][j+1]
		int m = word1.size();
		int n = word2.size();
		vector<int> temp(n + 1);
		vector<vector<int>> dp(m + 1, temp);
		for (int i = 1; i <= m; i++) {
			dp[i][0] = i;
		}
		for (int j = 1; j <= n; j++) {
			dp[0][j] = j;
		}

		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				if (word1[i-1] == word2[j-1]) {
					dp[i][j] = dp[i - 1][j - 1];
				}
				else {
					dp[i][j] = min(dp[i][j - 1] + 1,//word1插入
						min(dp[i - 1][j] + 1,//word1删除
							dp[i - 1][j - 1] + 1));//word1替换
				}
			}
		}
		return dp[m][n];

	}
};

//test
int main() {
	string word1 = "horse";
	string word2 = "ros";
	Solution s;
	int ans = s.minDistance(word1,word2);
	cout << ans << endl;

	system("pause");
	return 0;
}

