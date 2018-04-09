#include "std_lib_facilities.h"
using namespace std;

class Bad_area {};

int area(int x, int y)
{
	if (x <= 0 || y <= 0) throw Bad_area();
	return x * y;
}
int framed_area(int x, int y)
{
	const int frame_size = 2;
	int p = 0;
	try {
		p = area(x - frame_size, y - frame_size);
	}
	catch (Bad_area) {
		error("Bad area");
	}
	return p;
}

int main()
{
	int var1;
	var1 = framed_area(3, 4);
	var1 = framed_area(1, 4);

	return 0;
}