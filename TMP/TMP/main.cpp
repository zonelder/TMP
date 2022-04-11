#include<iostream>
#include"TMP.hpp"


int main()
{

	const unsigned f = factorial<5>::value;//120
	std::cout << f << std::endl;

	const unsigned c = C<3, 2>::value;//3
	std::cout << c << std::endl;

	const unsigned reverse_of_monomial =  monomial_3d<2, 1, 2>::value;//10080
	std::cout << reverse_of_monomial << std::endl;

	double a[3] = { 1.23, 2.34, 3.45 };
	double sum = my_accumulate(a, a + 3, 0.);//7.02 -правильное поведение accumulate в отличии от стандартного аналога
	std::cout << sum << std::endl;

	const unsigned fib = fibonachi<6>::value;//8
	std::cout << fib << std::endl;
	return 0;
}