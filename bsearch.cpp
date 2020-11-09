#include "common.h"

std::vector<int> test_arr{1,2,2,3,3,4,8,10};

int b_search_mid(const std::vector<int>& arr, int target)
{
    auto left = 0;
    auto right = arr.size() - 1;

    while (left <= right)
    {
        auto mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else if(arr[mid] > target)
        {
            right = mid - 1;
        }
    }
    return -1;
}

void test_bs_mid(int target)
{
    std::cout << "***test bs mid***" << std::endl;
    std::cout << b_search_mid(test_arr, target) << std::endl;
}