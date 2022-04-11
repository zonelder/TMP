template<typename IT>
struct get_value_type
{
	typedef typename IT::value_type type;
};
template<typename T>
struct get_value_type<T*>
{
	typedef T type;
};
template<typename T>
struct get_value_type<const T*>
{
	typedef T type;
};

/*template<>//in case we need to work with non standart iterator
struct<new_iterator>
{
	typedef typename new_iterator::data_type type;
};
*/
template<typename IT,typename T>
typename get_value_type<IT>::type my_accumulate(
	IT first, IT last, T init)
{
	typename get_value_type<IT>::type result = init;
	for (; first != last; ++first)
	{
		result += *first;
	}
	return result;
}