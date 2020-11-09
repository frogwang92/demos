#include "common.h"

void test_fib(unsigned int n);
void test_coin_dp(unsigned int n);
void test_back_track();
void test_bs_mid(int target);
void test_lis_solver_dp();
void test_lp();
void test_backpack01();
void test_traverse_list();

int main(int argc, char* argv[]) {
    std::cout << "entering main..." << std::endl;
    test_fib(11);
    test_coin_dp(7);
    test_back_track();
    test_bs_mid(10);
    test_lis_solver_dp();
    test_lp();
    test_backpack01();
    test_traverse_list();
}
