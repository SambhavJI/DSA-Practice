#include <iostream>
#include <vector>

using namespace std;

class solution {
private:
    void solve(vector<int> nums, int index, vector<vector<int>> &ans) {
        // base case
        if (index >= nums.size()) {
            ans.push_back(nums);
            return;
        }

        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            solve(nums, index + 1, ans);
            swap(nums[index], nums[i]);  // backtrack
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> ans;
        solve(nums, 0, ans);  
        return ans;
    }
};

int main() {
    solution s;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = s.permute(nums);

    for (const auto &perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
