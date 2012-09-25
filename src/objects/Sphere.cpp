#include "objects/Sphere.hpp"
#include "Vector.hpp"
#include "Ray.hpp"

Sphere::Sphere(const Vector &_center, double _radius) : center(_center), radius(_radius) {
}

bool Sphere::intersect(const Ray &ray) {
	// find minimum distance
	// compare to radius
	return false;
}
