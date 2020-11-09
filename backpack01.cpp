#include "common.h"

using namespace std;

int backpack01_dp_solver(const vector<int>& weights, const vector<int>& values, int pack)
{
    if (weights.size() != values.size())
    {
        return -1;
    }
    if (pack <= 0)
    {
        return -1;
    }
    
    std::vector<std::vector<int>> dp(weights.size(), std::vector<int>(pack + 1, 0));
    for (auto i = 0; i < weights.size(); i++)
    {
        for (auto j = 1; j <= pack; j++)
        {
            if (i == 0)
            {
                dp[i][j] = (weights[i] <= j ? values[i] : 0);
                continue;
            }
            
            auto newval = -1;
            if (weights[i] <= j)
            {
                newval = values[i] + dp[i - 1][j - weights[i]];
            }
            dp[i][j] = std::max(newval, dp[i-1][j]);
        }
    }
    return dp[weights.size() - 1][pack];
}

void test_backpack01()
{
    cout << "***test backpack01***" << endl;
    std::vector<int> weights{1, 4, 3};
    std::vector<int> values{1500, 3000, 2000};
    cout << backpack01_dp_solver(weights, values, 4) << endl;
}