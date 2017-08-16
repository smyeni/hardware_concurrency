#include <thread>
#include <iostream>

int main()
{
  unsigned n = std::thread::hardware_concurrency();
  std::cout "num threads: " << n << '\n';
}
