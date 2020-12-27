# Ranged For Range
Controls a range for C++'s range-based `for` loops. Useful for skipping over some starting/ending elements when using range-based `for`. Tested with C++17.

## Usage
### Using `LegacyRandomAccessIterator`
```cpp
std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
for (const auto& n : rf::range{v.begin() + 3, v.end() - 2})
    std::cout << n << ' ';     // will print 4 5 6 7 8
```

### Using `LegacyBidirectionalIterator`
```cpp
std::list<int> l{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
for (const auto& n : rf::range{std::next(l.begin(), 3), std::prev(l.end(), 2)})
    std::cout << n << ' ';     // will print 4 5 6 7 8
```
