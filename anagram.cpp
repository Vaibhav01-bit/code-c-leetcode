#include <iostream>
using namespace std;

bool isanagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }

    int count[26] = {0};

    // Count characters in s
    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
    }

    // Subtract characters using t
    for (int i = 0; i < t.length(); i++) {
        count[t[i] - 'a']--;
        if (count[t[i] - 'a'] < 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string s = "abba";
    string t = "abba";

    if (isanagram(s, t)) {
        cout << "Anagram" << endl;
    } else {
        cout << "Not anagram" << endl;
        //valid anagram
    }

    return 0;
}
