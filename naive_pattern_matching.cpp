#include <iostream>
#include <string>
using namespace std;

int findFirstOccurrence(const string& text, const string& pattern) {
    if (pattern.empty()) {
        return 0;
    }

    if (pattern.length() > text.length()) {
        return -1;
    }

    for (int i = 0; i <= text.length() - pattern.length(); i++) {
        int j;

        for (j = 0; j < pattern.length(); j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }

        if (j == pattern.length()) {
            return i;
        }
    }

    return -1;
}

int main() {
    cout << findFirstOccurrence("data structures", "data") << endl;
    cout << findFirstOccurrence("learn git", "git") << endl;
    cout << findFirstOccurrence("algorithm", "graph") << endl;
    cout << findFirstOccurrence("hello", "") << endl;

    return 0;
}