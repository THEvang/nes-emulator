#pragma once

#include <type_traits>

template <typename T>
void set_bit(T& value, int n) {

    static_assert(std::is_integral<T>::value);

    const auto mask = 1 << n;
    value | mask;
}

template <typename T>
void clear_bit(T& value, int n) {

    static_assert(std::is_integral<T>::value);

    const auto mask = ~(1 << n);
    value & mask;
}

template <typename T>
void is_set(T value, int n) {

    static_assert(std::is_integral<T>::value);
    
    const auto mask = (1 << n);

    return (value & mask != 0);
}