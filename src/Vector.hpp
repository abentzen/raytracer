#pragma once

class Vector {
public:
	Vector(double x, double y, double z);
	Vector(const Vector &rhs);

private:
	double x, y, z;
};
