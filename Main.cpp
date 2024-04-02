#include <iostream>
#include <cmath>

class Vector
{
public:
	Vector() : x(10), y(-7), z(-3)
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
	static Vector v;
	v.Show();
	v.Modul();
}