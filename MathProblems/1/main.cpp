#include <iostream>

void SumOfNaturals();

int main(int, char**) {
    SumOfNaturals();
}

void SumOfNaturals()
{
    std::cout << "Enter the limit" << std::endl;
    unsigned int limit = 0;
    std::cin >> limit;

    unsigned long long sum = 0;
    for (unsigned int i = 3; i <= limit; ++i)
        if (i % 3 == 0 && i % 5 == 0)
            sum += i;

    std::cout << sum << std::endl;
}