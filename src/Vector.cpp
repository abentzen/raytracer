#include "Vector.hpp"

#pragma region operator_overloads

Vector &Vector::operator+=(const Vector &rhs) {
	x += rhs.x;
	y += rhs.y;
	z += rhs.z;

	return *this;
}

Vector &Vector::operator-=(const Vector &rhs) {
	x -= rhs.x;
	y -= rhs.y;
	z -= rhs.z;

	return *this;
}

Vector &Vector::operator*=(double rhs) {
	x *= rhs;
	y *= rhs;
	z *= rhs;

	return *this;
}

Vector &Vector::operator/=(double rhs) {
	x /= rhs;
	y /= rhs;
	z /= rhs;

	return *this;
}

const Vector Vector::operator+(const Vector &rhs) {
	Vector result(*this);
	result += rhs;

	return result;
}

const Vector Vector::operator-(const Vector &rhs) {
	Vector result(*this);
	result -= rhs;

	return result;
}

const Vector Vector::operator*(double rhs) {
	Vector result(*this);
	result *= rhs;

	return result;
}

const Vector Vector::operator/(double rhs) {
	Vector result(*this);
	result /= rhs;

	return result;
}

#pragma endregion

double Vector::dot(const Vector &other) {
	return (x*other.x + y*other.y + z*other.z);
}

Vector Vector::cross(const Vector &other) {
	Vector result(0,0,0);
	result.x = y*other.z - z*other.y;
	result.y = z*other.x - x*other.z;
	result.z = x*other.y - y*other.x;

	return result;
}

#pragma region constructors

Vector::Vector(double x, double y, double z) : x(x), y(y), z(z) {
}

Vector::Vector(const Vector &other) : x(other.x), y(other.y), z(other.z) {
}

#pragma endregion