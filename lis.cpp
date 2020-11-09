#include "common.h"

using namespace std;

std::vector<int> lis_arr{5,2,8,6,3,6,9,7,10};

static std::vector<int> lis_buffer(lis_arr.size(), 1);

int lis_solver_dp(const std::vector<int>& input_arr)
{
    for (auto i = 0; i < input_arr.size(); i++)
    {
        for (auto j = 0; j < i; j++)
        {
            if (lis_arr[j] < lis_arr[i])
            {
                lis_buffer[i] = std::max(lis_buffer[i], lis_buffer[j] + 1);
            }
        }
    }
    return *std::max_element(lis_buffer.begin(), lis_buffer.end());
}

void test_lis_solver_dp()
{
    cout << "***test lis solver dp***" << endl;
    cout << lis_solver_dp(lis_arr) << endl;
}