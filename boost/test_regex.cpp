#include "boost/regex.hpp"

int
main()
	{
	boost::regex r("aa");
	if( !boost::regex_search("baa",r) )
		return 1;
	return 0;
	}
