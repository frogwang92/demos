#include "common.h"

using namespace std;

std::string str("babacab");
std::vector<std::vector<bool>> lp_dp;

int lp_solver_dp(std::string& str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        lp_dp.emplace_back(std::vector<bool>(str.size(), false));
    }
    
    auto maxlen = 0;
    for (size_t i = 3; i <= str.size(); i++)
    {
        for (auto j = 0; j < str.size() - i + 1; j++)
        {
            auto right_pos = j + i - 1;
            if (str[j] == str[right_pos])
            {
                if (i == 3)
                {
                    lp_dp[j][right_pos] = true;
                    maxlen = std::max(maxlen, (int)i);
                }
                else if (lp_dp[j+1][right_pos-1])
                {
                    lp_dp[j][right_pos] = true;
                    maxlen = std::max(maxlen, (int)i);
                }
            }
        }
    }
    return maxlen;
}

void test_lp()
{
    cout << "***test lp***" << endl;
    cout << lp_solver_dp(str) << endl;
}