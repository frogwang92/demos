#include <iostream>
#include <map>

std::map<unsigned int, unsigned int> fib_buffers;

int fib(unsigned int n) {
  if (fib_buffers.count(n) > 0) {
    return fib_buffers[n];
  }
  fib_buffers[n] = fib(n - 1) + fib(n - 2);
  return fib_buffers[n];
}

int fib_dp(unsigned int n) {
  if (fib_buffers.count(n) > 0) {
    return fib_buffers[n];
  }
  for (auto i = 3; i <= n; ++i) {
    fib_buffers[i] = fib_dp(i - 1) + fib_dp(i - 2);
  }
  return fib_buffers[n];
}

void test_fib(unsigned int n) {
  std::cout << "***test_fib***" << std::endl;
  fib_buffers.clear();
  fib_buffers[1] = 1;
  fib_buffers[2] = 1;
  std::cout << fib(11u) << std::endl;
  fib_buffers.clear();
  fib_buffers[1] = 1;
  fib_buffers[2] = 1;
  std::cout << fib_dp(10u) << std::endl;
}