#pragma once
namespace opt_algo
{
    template <typename T>
    T quick_pow_iterative(T a, T b, T mod)
    {
        T res = 1 % mod;
        a %= mod;
        while (b)
        {
            if (b & 1)
            {
                res = (res * a) % mod;
            }
            a = (a * a) % mod;
            b >>= 1;
        }
        return res;
    }
}