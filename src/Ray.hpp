#pragma once

#include "Vector.hpp"

class Ray {
public:
	Ray(Vector origin, Vector dir);
	Ray(const Ray &rhs);

private:
	Vector origin, direction;
};
