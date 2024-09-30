// @leet start
#include <algorithm>
#include <vector>
using namespace std;

// solution 1
// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
//     {
//         int start1 = 0;
//         int start2 = 0;
//         int end1 = nums1.size();
//         int end2 = nums2.size();
//         int n = end1 + end2;
//         int right, left;
//         for (int i = 0; i <= n / 2; i++) {
//             left = right;
//             if (start2 >= end2 || start1 < end1 && nums1[start1] < nums2[start2]) {
//                 right = nums1[start1++];
//             } else {
//                 right = nums2[start2++];
//             }
//         }

//         if (n % 2 == 0) {
//             return (left + right) / 2.0;
//         } else {
//             return right;
//         }
//     }
// };

// solution 2
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        move(nums2.begin(), nums2.end(), back_inserter(nums1));
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        if (n % 2 == 0) {
            return (nums1[n / 2] + nums1[n / 2 - 1]) / 2.0;
        } else {
            return nums1[n / 2];
        }
    }
};

// solution 3
//  class Solution {
//  public:
//      double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
//      {

//     }
// };

// solution 4
//  class Solution {
//  public:
//      double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
//      {

//     }
// };

// @leet end
