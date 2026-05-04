#pragma once
namespace opt_algo
{
    template <typename T>
    T quick_pow_recursive(T a, T b, T mod)
    {
        if (b == 0)
        {
            return 1 % mod;
        }
        T half = quick_pow_recursive(a, b / 2, mod);
        half = (half * half) % mod;
        if (b % 2)
        {
            half = (half * a) % mod;
        }
        return half;
    }
}