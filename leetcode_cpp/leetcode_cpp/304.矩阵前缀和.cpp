//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//
//class NumMatrix {
//public:
//    vector<vector<int>> preSum;
//    NumMatrix(vector<vector<int>>& matrix) {
//        int m = matrix.size();
//        int n = matrix[0].size();
//        vector<int> temp(n + 1);
//        preSum.resize(m + 1 , temp );
//        //preSum 第一行、第一列全为0 
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                preSum[i + 1][j + 1] = matrix[i][j] + preSum[i][j+1] + preSum[i+1][j] - preSum[i][j];
//            }
//        }
//    }
//
//    int sumRegion(int row1, int col1, int row2, int col2) {
//        return preSum[row2 + 1][col2 + 1] - preSum[row2 + 1][col1] - preSum[row1][col2+1] + preSum[row1][col1];
//    }
//};
//
////test
//int main() {
//
//    vector<vector<int>> a = { {-1} };//{ {3, 0, 1, 4, 2},{5, 6, 3, 2, 1},{1, 2, 0, 1, 5},{4, 1, 0, 1, 7},{1, 0, 3, 0, 5} }; //{ {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//    NumMatrix nums(a);
//        cout << nums.sumRegion(0,0,0,0) << endl;
//
//
//
//	system("pause");
//	return 0;
//}