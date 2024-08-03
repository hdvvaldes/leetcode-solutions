#include <unordered_map>
#include <vector>
class Solution {
    public:
        std::vector<int> twoSum (std::vector<int> &nums, int target) {
            std::unordered_map<int, int> myMap;
            for(int i = 0; i < nums.size(); ++i) {
                if(myMap.find(target-nums[i]) != myMap.end())
                    return std::vector<int> {i, myMap[target - nums[i]]};
                myMap[nums[i]] = i;
            }
            return std::vector<int> {};
        }
}

