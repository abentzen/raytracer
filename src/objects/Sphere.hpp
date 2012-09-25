#pragma once

#include "objects/Object.hpp"
#include "Ray.hpp"
#include "Vector.hpp"

class Sphere : public Object {
public:
	Sphere(const Vector &center, double radius);

	virtual bool intersect(const Ray &ray);

private:
	Vector center;
	double radius;
};
