#ifndef fact 
#include"factorial.hpp"
#define fact
#endif 

template<unsigned alfa,unsigned beta,unsigned gamma>
struct monomial_3d {
	static const unsigned value = factorial<alfa + beta + gamma + 3>::value / (factorial<alfa>::value * factorial<beta>::value * factorial<gamma>::value);
};
