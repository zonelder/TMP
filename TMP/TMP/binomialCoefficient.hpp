#include"factorial.hpp"

template<unsigned N,unsigned K>
struct C {
	static const unsigned value= factorial<N>::value / factorial<K>::value / factorial<N - K>::value;
};