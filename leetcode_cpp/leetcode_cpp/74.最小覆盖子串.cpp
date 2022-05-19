#include <iostream>
#include <queue>
#include <unordered_set>
#include <algorithm>
#include <unordered_map>
using namespace std;

////滑动窗口
//class Solution {
//public:
//    string minWindow(string s, string t) {
//        int left = 0, right = 0;
//        int valid = 0;
//        int start = 0,len=INT_MAX;
//        unordered_map<char, int> need,window;
//        for (char c : t)   need[c]++;
//
//
//
//        //滑动右窗口
//        while (right < s.size()) {
//            char c = s[right];
//            right++;
//            //窗口内数据更新   下面不能用 if (need[c] != 0) {   
//            //need[c]会初始化成0
//            if (need.count(c)) {
//                window[c]++;
//                if (window[c] == need[c]) {
//                    valid++;
//                }
//            }
//            //判断左窗口是否要更新
//            while (valid == need.size()) {
//                //更新最小覆盖子串
//                if (right - left < len) {
//                    start = left;
//                    len = right - left;
//                }
//                //移除最左的字符
//                char d = s[left];
//                left++;
//                //更新窗口
//                if (need.count(d)) {
//                    if (window[d] == need[d]) {
//                        valid--;
//
//                    }
//                    window[d]--;
//                }		
//            }
//            
//
//        }
//
//
//        return len==INT_MAX?"": s.substr(start, len);
//    }
//};


class Solution {
public:
    string minWindow(string s, string t) {
        //滑动窗口
        int left = 0, right = 0;
        int start = 0, len = INT_MAX;
        int n = s.length();
        unordered_map<char, int> need, map;//两个哈希表分别记录
        for (char c : t)   need[c]++;

        int valid = 0;//记录有多少个字符满足需要了

        //右窗口
        while (right < n) {
            char d = s[right];
            if (need.count(d)) {
                map[d]++;
                if (map[d] == need[d]) {
                    valid++;
                }
            }
            //满足need需要
            while (valid == need.size()) {
                //right指向最后一个要传出去字符
                if (right - left + 1 < len) {
                    len = right - left + 1;
                    start = left;
                }


                //移动左窗口
                char e = s[left];
                
                left++;
                //左窗口移动到不再满足
                if (need.count(e)) {
                    if (map[e] == need[e]) {
                        valid--;
                    }
                    map[e]--;                   //map[e]--放在前一个if判断后面，map[e]-- 后就不满足了
                }
            }
            right++;                                    //放在后面的话，长度需要+1
        }
        return len == INT_MAX ? "" : s.substr(start, len);

    }
};

//test
int main() {

    Solution s1;
    string s = "ADOBECODEBANC", t = "ABC";

   string ans = s1.minWindow(s,t);
    cout << ans << endl;

    system("pause");
    return 0;
}