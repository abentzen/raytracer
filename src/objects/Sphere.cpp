#include "objects/Sphere.hpp"
#include "Vector.hpp"
#include "Ray.hpp"
#include <cmath>

Sphere::Sphere(const Vector &_center, double _radius) : center(_center), radius(_radius) {
}

bool Sphere::intersect(const Ray &ray) {
	// find minimum distance
	// compare to radius
	Vector c_o = center - ray.origin;

	// If the ray is inside the sphere intersection is impossible.
	if (c_o.length() < radius)
		return false;

	double len = c_o.length() * (c_o.dot(ray.direction)/(c_o.length()));

	// If the closest point is "behind" the origin of the ray it cannot intersect.
	if (len < 0)
		return false;

	Vector c_proj = ray.origin + (ray.direction * len);

	double dist = (center - c_proj).length();

	if (dist > radius)
		return false;
	else
		return true;
}
