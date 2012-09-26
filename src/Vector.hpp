#pragma once

class Vector {
public:
	Vector(double x, double y, double z);
	Vector(const Vector &other);

	Vector &operator+=(const Vector &rhs);
	Vector &operator-=(const Vector &rhs);
	Vector &operator*=(double rhs);
	Vector &operator/=(double rhs);
	const Vector operator+(const Vector &rhs) const;
	const Vector operator-(const Vector &rhs) const;
	const Vector operator*(double rhs) const;
	const Vector operator/(double rhs) const;

	double dot(const Vector &other) const;
	Vector cross(const Vector &other) const;

	double length() const;

	double x, y, z;
};
