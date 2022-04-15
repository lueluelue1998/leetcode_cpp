//#include <iostream>
//#include <queue>
//#include <unordered_set>
//#include <algorithm>
//using namespace std;
//
//string plusOne(string s,int i) {
//    //s.c_str();
//    string news(s);
//    if (news[i] == '9') {
//        news[i] = '0';
//    }
//    else
//    {
//        news[i]++;
//    }
//    return news;
//}
//string minusOne(string s, int i) {
//    //s.c_str();
//    string news(s);
//    if (news[i] == '0') {
//        news[i] = '9';
//    }
//    else
//    {
//        news[i]--;
//    }
//    return news;
//}
//
//
//class Solution {
//public:
//    int openLock(vector<string>& deadends, string target) {
//        
//        //deadendsº”»Îvisited
//        unordered_set<string> visited;
//        unordered_set<string> dead;
//        for (auto s : deadends) {
//            if (s=="0000") {
//                return -1;
//            }
//            else
//            {
//                dead.insert(s);
//            }
//        }
//        queue<string> q;
//        q.push("0000");
//        visited.insert("0000");
//        int step = 0;
//
//        while (!q.empty())
//        {
//            int size = q.size();
//            for (int i = 0; i < size; i++) {
//                string cur = q.front();
//                q.pop();
//                if (dead.find(cur)!= dead.end()) {
//                    continue;
//                }
//                if (cur == target) {
//                    return step;
//                }
//
//                for (int j = 0; j < 4; j++) {
//                    string up = plusOne(cur, j);
//                    if (visited.count(up) == 0) {
//                        q.push(up);
//                        visited.insert(up);
//                    }
//                    string down = minusOne(cur, j);
//                    if (visited.count(down) == 0) {
//                        q.push(down);
//                        visited.insert(down);
//                    }
//                }
//            }
//            step++;
//        }
//        return -1;
//    }
//};
//
//
////test
//int main() {
//
//    Solution s;
//    vector<string> deadends = { "0201", "0101", "0102", "1212", "2002" };
//    string tar = "0202";
//
//    int ans = s.openLock(deadends,tar);
//    cout << ans << endl;
//
//    system("pause");
//    return 0;
//}