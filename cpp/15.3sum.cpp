// @leet start
#include <algorithm>
#include <vector>
using namespace std;

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums)
//     {
//         vector<vector<int>> res;
//         sort(nums.begin(), nums.end());

//         vector<int> tmp_vec(3);

//         int middle = 1;
//         int left, right;
//         int end = nums.size() - 1;

//         int sum;
//         while (middle < end) {
//             if (middle > 1 && nums[middle] == nums[middle - 1]) {
//                 if (nums[middle - 2] != nums[middle])
//                     left = middle - 1;
//                 else {
//                     middle++;
//                     continue;
//                 }

//             } else {

//                 left = 0;
//                 right = end;
//             }
//             while (left < middle && right > middle) {

//                 sum = nums[right] + nums[left];
//                 int equal_num = -nums[middle];
//                 if (sum == equal_num) {
//                     tmp_vec[0] = nums[left];
//                     tmp_vec[1] = nums[middle];
//                     tmp_vec[2] = nums[right];
//                     res.push_back(tmp_vec);
//                     do {
//                         right--;
//                     } while (nums[right] == nums[right + 1] && right > middle);

//                     do {
//                         left++;
//                     } while (nums[left] == nums[left - 1] && left < middle);
//                 } else if (sum > equal_num) {
//                     right--;
//                     while (nums[right] == nums[right + 1] && right > middle) {
//                         right--;
//                     }
//                 } else {
//                     left++;
//                     while (nums[left] == nums[left - 1] && left < middle) {
//                         left++;
//                     }
//                 }
//             }

//             middle++;
//         }
//         return res;
//     }
// };

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        int first = 0;
        int second, third;
        int length = nums.size();
        int sum;
        while (first < length - 2) {
            if (first > 0 && nums[first] == nums[first - 1]) {
                first++;
                continue;
            }
            if (nums[first] + nums[first + 1] + nums[first + 2] > 0) {
                break;
            }
            if (nums[first] + nums[length - 2] + nums[length - 1] < 0) {
                first++;
                continue;
            }

            second = first + 1;
            third = length - 1;
            while (second < third) {
                sum = nums[first] + nums[second] + nums[third];
                if (sum == 0) {
                    res.push_back({ nums[first], nums[second], nums[third] });
                    while (second < third && nums[second] == nums[++second])
                        ;
                    while (second < third && nums[third] == nums[--third])
                        ;

                } else if (sum > 0) {
                    third--;
                } else {
                    second++;
                }
            }
            first++;
        }
        return res;
    }
};
// @leet end
