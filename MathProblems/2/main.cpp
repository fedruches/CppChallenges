#include <iostream>
#include <numeric>

unsigned long long gcd(const unsigned int aFirst, const unsigned int aSecond);

int main(int, char **)
{
    std::cout << gcd(8, 26) << std::endl;
    return 0;
}

unsigned long long gcd(const unsigned int aFirst, const unsigned int aSecond)
{
    return aSecond == 0 ? aFirst : gcd(aSecond, aFirst % aSecond);
}
