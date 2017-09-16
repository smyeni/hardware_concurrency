#include <thread>
#include <iostream>

int main()
{
  unsigned n = std::thread::hardware_concurrency();
  std::cout << "Max num threads: " << n << '\n';
  return 0; //redundant
}
