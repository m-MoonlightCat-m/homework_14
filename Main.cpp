#include <iostream>
#include <cmath>

class Vector
{
public:
	Vector() : x(0), y(0), z(0)
	{

	}

	Vector(float _x, float _y, float _z) : x(_x), y(_y), z(_z)
	{

	}

	void Show()
	{
		std::cout << "\n" << x << ' ' << y << ' ' << z;
	}

	void Modul()
	{
		std::cout << "\n" << fabs(x) << ' ' << fabs(y) << ' ' << fabs(z);
	}
private:
	double x;
	double y;
	double z;
};

int main() 
{
	Vector v (10, -7, -3);
	v.Show();
	v.Modul();
}