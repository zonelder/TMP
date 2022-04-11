#ifndef prime
#define prime
#endif

template<unsigned N,unsigned i>
struct is_prime0 : std::conditional < (N% i) == 0, std::false_type, is_prime0<N, i - 1>>::type {};
template<unsigned N>
struct is_prime0<N, 1> :std::true_type {};

template<unsigned N>
struct is_prime :is_prime0<N, N / 2> {};