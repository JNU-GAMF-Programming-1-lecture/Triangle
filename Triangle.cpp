// Triangle.cpp
#include <iostream>

using namespace std;

bool CanFormTriangle(double x, double y, double z)
{
	bool ok = false;
	if (x + y > z && x + z > y && y + z > x)
		ok = true;
	return ok;
}

int main()
{
	cout << "Can the side lengths 3,4,5 form a triangle? ";
	cout << (CanFormTriangle(3, 4, 5) ? "yes"  : "no");
}