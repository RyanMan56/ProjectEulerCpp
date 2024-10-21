#include "problem3.h"

#include <iostream>

long findLargestPrimeFactor(long value)
{
    long currentValue{value};
    long largestPrimeFactor{};
    long i{};

    // First remove all factors of 2
    while (currentValue % i == 0)
    {
        largestPrimeFactor = i;
        currentValue /= i;
    }

    // Check odd factors from 3 onwards
    for (long i = 3; i * i < currentValue; i += 2)
    {
        while (currentValue % i == 0)
        {
            largestPrimeFactor = i;
            currentValue /= i;
        }
    }

    if (currentValue > 2)
    {
        largestPrimeFactor = currentValue;
    }

    return largestPrimeFactor;
}

void problem3()
{
    std::cout << "\n-----\nProblem 3:\nFind the largest prime factor of 600851475143\n\n";

    long largestPrime{findLargestPrimeFactor(600851475143)};
    std::cout << "Largest prime: " << largestPrime << '\n';
}