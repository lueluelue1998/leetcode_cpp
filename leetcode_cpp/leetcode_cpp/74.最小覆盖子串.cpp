#include <iostream>
#include <queue>
#include <unordered_set>
#include <algorithm>
#include <unordered_map>
using namespace std;

////��������
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
//        //�����Ҵ���
//        while (right < s.size()) {
//            char c = s[right];
//            right++;
//            //���������ݸ���   ���治���� if (need[c] != 0) {   
//            //need[c]���ʼ����0
//            if (need.count(c)) {
//                window[c]++;
//                if (window[c] == need[c]) {
//                    valid++;
//                }
//            }
//            //�ж��󴰿��Ƿ�Ҫ����
//            while (valid == need.size()) {
//                //������С�����Ӵ�
//                if (right - left < len) {
//                    start = left;
//                    len = right - left;
//                }
//                //�Ƴ�������ַ�
//                char d = s[left];
//                left++;
//                //���´���
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
        //��������
        int left = 0, right = 0;
        int start = 0, len = INT_MAX;
        int n = s.length();
        unordered_map<char, int> need, map;//������ϣ��ֱ��¼
        for (char c : t)   need[c]++;

        int valid = 0;//��¼�ж��ٸ��ַ�������Ҫ��

        //�Ҵ���
        while (right < n) {
            char d = s[right];
            if (need.count(d)) {
                map[d]++;
                if (map[d] == need[d]) {
                    valid++;
                }
            }
            //����need��Ҫ
            while (valid == need.size()) {
                //rightָ�����һ��Ҫ����ȥ�ַ�
                if (right - left + 1 < len) {
                    len = right - left + 1;
                    start = left;
                }


                //�ƶ��󴰿�
                char e = s[left];
                
                left++;
                //�󴰿��ƶ�����������
                if (need.count(e)) {
                    if (map[e] == need[e]) {
                        valid--;
                    }
                    map[e]--;                   //map[e]--����ǰһ��if�жϺ��棬map[e]-- ��Ͳ�������
                }
            }
            right++;                                    //���ں���Ļ���������Ҫ+1
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