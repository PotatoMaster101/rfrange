////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Specifies a range when used in range-based for loops.
/// https://github.com/PotatoMaster101/rfrange
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef RFRANGE_HPP
#define RFRANGE_HPP

namespace rf {

    // Range for range-based for loop.
    template <class Iter>
    class range {
    public:
        // Constructors.
        constexpr range(Iter beg, Iter end)
            : begin_{beg}, end_{end} {}

        // Getters.
        constexpr Iter begin() const noexcept { return begin_; }
        constexpr Iter end() const noexcept { return end_; }

    private:
        Iter begin_;    // range begin
        Iter end_;      // range end
    };

}   // namespace rf

#endif  // RFRANGE_HPP
