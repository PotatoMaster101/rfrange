#include <iostream>
#include <vector>
#include <list>
#include "../include/rfrange/rfrange.hpp"

// Tests LegacyRandomAccessIterator.
bool test_random_access() {
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto r = rf::range{v.begin() + 3, v.end() - 2};
    return std::vector<int>(r.begin(), r.end()) == std::vector<int>{4, 5, 6, 7, 8};
}

// Tests LegacyBidirectionalIterator.
bool test_bidirect() {
    std::list<int> l{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto r = rf::range{std::next(l.begin(), 3), std::prev(l.end(), 2)};
    return std::list<int>(r.begin(), r.end()) == std::list<int>{4, 5, 6, 7, 8};
}

int main() {
    if (!test_random_access())
        std::cerr << "test_random_access() failed\n";
    if (!test_bidirect())
        std::cerr << "test_bidirect() failed\n";
    return 0;
}
