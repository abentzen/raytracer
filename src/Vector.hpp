#pragma once

class Vector {
public:
	Vector(double x, double y, double z);
	Vector(const Vector &rhs);

	Vector &operator+=(const Vector &rhs);
	Vector &operator-=(const Vector &rhs);
	Vector &operator*=(double rhs);
	Vector &operator/=(double rhs);
	const Vector operator+(const Vector &rhs);
	const Vector operator-(const Vector &rhs);
	const Vector operator*(double rhs);
	const Vector operator/(double rhs);

	double dot(const Vector &other);
	Vector cross(const Vector &other);

	double x, y, z;
};
