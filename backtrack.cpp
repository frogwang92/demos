#include "common.h"

using namespace std;

std::vector<int> nums = {2, 3, 4, 5};
std::vector<std::vector<int>> results;

void bt(const std::vector<int>& nums, std::vector<int>& current_list)
{
    if (current_list.size() == nums.size())
    {
        results.push_back(current_list);
        for (auto &&i : current_list)
        {
            cout << i ;
        }
        cout << endl; 
    }
    
    for (size_t i = 0; i < nums.size(); ++i)
    {
        if (std::find(current_list.begin(), current_list.end(), nums[i]) != current_list.end())
        {
            continue;
        }
        else
        {
            current_list.push_back(nums[i]);
            bt(nums, current_list);
            current_list.erase(current_list.begin() + (current_list.size() - 1));
        }
    }
}

void test_back_track()
{
    cout << "***test back track***" << endl;
    std::vector<int> current_list;
    bt(nums, current_list);
}