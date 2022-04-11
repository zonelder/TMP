#ifndef fact 
#include"factorial.hpp"
#define fact
#endif

template<unsigned N,unsigned K>
struct C {
	static const unsigned value= factorial<N>::value / factorial<K>::value / factorial<N - K>::value;
};