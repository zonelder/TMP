#include<iostream>
#include"TMP.hpp"


int main()
{

	const unsigned f = factorial<5>::value;//120
	std::cout << f << std::endl;

	const unsigned c = C<3, 2>::value;//3
	std::cout << c << std::endl;

	const unsigned reverse_of_monomial3 =  monomial_3d<2, 1, 2>::value;//10080
	std::cout << reverse_of_monomial3 << std::endl;

	const unsigned reverse_of_monomial2 = monomial_2d<2, 1>::value;//60
	std::cout << reverse_of_monomial2 << std::endl;

	double a[3] = { 1.23, 2.34, 3.45 };
	double sum = my_accumulate(a, a + 3, 0.);//7.02 -правильное поведение accumulate в отличии от стандартного аналога
	std::cout << sum << std::endl;

	const unsigned fib = fibonachi<6>::value;//8
	std::cout << fib << std::endl;

	double x = 2.;
	std::cout << pow<4>(x) << std::endl;//16

	std::cout << prime_at<10>::value << std::endl;//31
	return 0;
}