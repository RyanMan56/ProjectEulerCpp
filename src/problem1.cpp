#include "problem1.h"

#include <iostream>
#include <vector>
#include <numeric>

std::ostream &operator<<(std::ostream &os, const std::vector<int> &vec)
{
    os << "[";
    for (size_t i = 0; i < vec.size(); ++i)
    {
        os << vec[i];
        if (i != vec.size() - 1)
        {
            os << ", ";
        }
    }
    os << "]";
    return os;
}

bool isMultipleOf(int multipleOf, int value)
{
    return value % multipleOf == 0;
}

int sumNumbers(const std::vector<int> &numbers)
{
    return std::accumulate(numbers.begin(), numbers.end(), 0);
}

std::vector<int> createVector(int size)
{
    std::vector<int> v{};
    v.reserve(size / 3); // A rough estimate to avoid multiple reallocations
    for (int i = 1; i < size; ++i)
    {
        if (isMultipleOf(3, i) || isMultipleOf(5, i))
        {
            v.push_back(i);
        }
    }
    return v;
}

void problem1()
{
    std::cout << "Problem 1:\n\n";

    std::vector<int> v{createVector(1000)};
    std::cout << "Vector: " << v << "\n\n";

    int sum{sumNumbers(v)};
    std::cout << "Sum: " << sum << '\n';
}