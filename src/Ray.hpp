#pragma once

#include "Vector.hpp"

class Ray {
public:
	Ray(const Vector &origin, const Vector &dir);
	Ray(const Ray &rhs);

	Vector origin, direction;
};
