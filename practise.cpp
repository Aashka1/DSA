#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<string> a;
        int maxLength = 0;

        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < i; j++) {
                if (s.find(s.substr(j, i - j + 1)) != string::npos) {
                    // If repeating characters are found, update maxLength and break
                    maxLength = max(maxLength, i - j);
                    break;
                }
            }
        }

        return maxLength;
    }
};
int main(){
    string a;
    cin>>a;
    Solution s;
    int b=s.lengthOfLongestSubstring(a);
    cout<<b;
    return 0;
}
