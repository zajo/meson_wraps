#include "boost/shared_ptr.hpp"

int
main()
	{
	boost::shared_ptr<int> p(new int(42));
	return 0;
	}
