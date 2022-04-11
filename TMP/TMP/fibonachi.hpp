template<unsigned N>
struct fibonachi {
	static const unsigned value = fibonachi<N - 1>::value + fibonachi<N - 2>::value;
};
template<>
struct fibonachi<0>
{
	static const unsigned value = 0;
};
template<>
struct fibonachi<1>
{
	static const unsigned value = 1;
};