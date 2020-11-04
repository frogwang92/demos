#include "common.h"

void test_fib(unsigned int n);
void test_coin_dp(unsigned int n);
void test_back_track();

int main(int argc, char* argv[]) {
    std::cout << "entering main..." << std::endl;
    test_fib(11);
    test_coin_dp(7);
    test_back_track();
}
