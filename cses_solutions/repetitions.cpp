#include <iostream>
#include <string>
using namespace std;

void solution(string s) {
    int right , left;
    int maxval = 0;
    right = left = 0;

    while (right < s.length()) {
        if (right + 1 < s.length() && s[right + 1] == s[right]) {
            right++;
        } else {
            maxval = max(right - left + 1, maxval);
            right++;
            left = right;
        }
    }
    cout << maxval;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    solution(s);

    return 0;
}