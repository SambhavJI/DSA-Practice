#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
private:
    void solve(string digits, string output, int index, vector<string>& ans, string map[]) {
        // Base case
        if (index >= digits.size()) {
            ans.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        string value = map[number];

        for (int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);
            solve(digits, output, index + 1, ans, map);
            output.pop_back(); // Backtracking
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0) {
            return ans;
        }

        string output;
        int index = 0;
        string map[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

        solve(digits, output, index, ans, map);
        return ans;
    }
};

int main() {
    string input;
    cout << "Enter digits (2-9): ";
    cin >> input;

    Solution solution;
    vector<string> result = solution.letterCombinations(input);

    cout << "Letter combinations:\n";
    for (const string& combination : result) {
        cout << combination << " ";
    }
    cout << endl;

    return 0;
}
