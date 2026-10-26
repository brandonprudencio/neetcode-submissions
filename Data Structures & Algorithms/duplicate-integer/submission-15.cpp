#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashset;

        for (int n : nums) {
            // Check if n is already in the hash set
            if (hashset.find(n) != hashset.end()) {
                return true;
            }
            // Otherwise, insert it
            hashset.insert(n);
        }

        return false;
    }
};