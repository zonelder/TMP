#ifndef fact 
#include"factorial.hpp"
#define fact
#endif 

template<unsigned alfa,unsigned beta>
struct monomial_2d {
	static const unsigned value = factorial<alfa + beta + 2>::value /(factorial<alfa>::value * factorial<beta>::value);
};