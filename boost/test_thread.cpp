#include "boost/thread.hpp"

void
th()
	{
	}

int
main()
	{
	boost::thread t(&th);
	t.join();
	return 0;
	}
