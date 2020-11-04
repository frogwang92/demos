#include <vector>
#include <set>
#include <algorithm>
#include <limits>
#include "common.h"

std::set<unsigned int> coins = {1, 2, 5};

int coin_dp(int target, const std::set<unsigned int>& coins)
{
    if (target < 0)
    {
        return -1;
    }
    
    if (coins.count(target)> 0)
    {
        return 1;
    }
    else
    {
        auto result = std::numeric_limits<unsigned int>::max();
        for(auto i: coins)
        {
            auto tmp_result = coin_dp(target - i, coins);
            if (tmp_result < result && tmp_result > 0)
            {
                result = tmp_result; 
            }
        }
        return result + 1;
    }
    return -1;
}

void test_coin_dp(unsigned int n)
{
    std::cout << "***test coin dp***" << std::endl;
    std::cout << coin_dp(n, coins) << std::endl;
}
