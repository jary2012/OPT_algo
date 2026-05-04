#include <bits/stdc++.h>
#include "./math/quick_pow/iterative/quick_pow_iterative.hpp"
#include "./math/quick_pow/recursive/quick_pow_recursive.hpp"
using namespace opt_algo;

int main()
{
    std::cout << "迭代版 2^10 mod 1e9+7 = " << quick_pow_iterative(2, 10, 1000000007) << "\n";
    std::cout << "递归版 2^10 mod 1e9+7 = " << quick_pow_recursive(2LL, 60, 1000000007LL) << "\n";
    return 0;
}