#include<iostream>
#include"TMP.hpp"


int main()
{

	const unsigned f = factorial<5>::value;
	std::cout << f << std::endl;

	const unsigned c = C<3, 2>::value;
	std::cout << c << std::endl;
	return 0;
}