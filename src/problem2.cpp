#include "problem2.h"
#include "vector_util.h"

#include <iostream>
#include <vector>
#include <numeric>

std::vector<int> generateFibonacciUpToMax(int max)
{
    int previous{1};
    int current{2};
    std::vector<int> v{previous, current};

    while (previous + current <= max)
    {
        int newValue{previous + current};
        previous = current;
        current = newValue;
        v.push_back(newValue);
    }
    return v;
}

int sumOfEvenValues(const std::vector<int> &v)
{
    return std::accumulate(v.begin(), v.end(), 0, [](int total, int value)
                           { return value % 2 == 0 ? total + value : total; });
}

void problem2()
{
    std::cout << "\n-----\nProblem 2:\nCalculate the sum of all even numbers in the fibonacci sequence from 1 to 4,000,000\n\n";

    std::vector<int> v{generateFibonacciUpToMax(4000000)};
    std::cout << "Vector: " << v << "\n\n";

    std::cout << "Sum of even values: " << sumOfEvenValues(v) << '\n';
}