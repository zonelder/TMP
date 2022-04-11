#ifndef prime
#define prime
#include "is_prime.hpp"
#endif
template<unsigned n>
struct find_prime :std::conditional<is_prime<n>::value,
	std::integral_constant<unsigned, n>, find_prime<n + 2>>::type{};

template<unsigned n>
struct prime_at :find_prime<prime_at<n - 1>::value + 2> {};
template<>
struct prime_at<0>:std::integral_constant<unsigned,2>{};
template<>
struct prime_at<1>:std::integral_constant<unsigned,3>{};