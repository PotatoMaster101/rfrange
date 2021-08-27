#include <algorithm>
#include <forward_list>
#include <iterator>
#include <list>
#include <rfrange/rfrange.hpp>
#include <vector>
#include "doctest.hpp"

TEST_CASE("random access iterator") {
    std::vector<int> original{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> expected{4, 5, 6, 7, 8};
    rf::range r{std::begin(original) + 3, std::end(original) - 2};
    std::vector<int> compare{std::begin(r), std::end(r)};

    CHECK(compare.size() == expected.size());
    CHECK(std::equal(std::begin(compare), std::end(compare), std::begin(expected)));
}

TEST_CASE("bidirectional iterator") {
    std::list<int> original{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::list<int> expected{4, 5, 6, 7, 8};
    rf::range r{std::next(std::begin(original), 3), std::prev(std::end(original), 2)};
    std::list<int> compare{std::begin(r), std::end(r)};

    CHECK(compare.size() == expected.size());
    CHECK(std::equal(std::begin(compare), std::end(compare), std::begin(expected)));
}

TEST_CASE("forward iterator") {
    std::forward_list<int> original{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::forward_list<int> expected{4, 5, 6, 7, 8, 9, 10};
    rf::range r{std::next(std::begin(original), 3), std::end(original)};
    std::forward_list<int> compare{std::begin(r), std::end(r)};

    CHECK(std::equal(std::begin(compare), std::end(compare), std::begin(expected)));
}
