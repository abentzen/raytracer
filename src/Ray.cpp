#include "Ray.hpp"

Ray::Ray(const Vector &_origin, const Vector &dir) : origin(_origin), direction(dir) {
	direction.makeUnit();
}

Ray::Ray(const Ray &rhs) : origin(rhs.origin), direction(rhs.direction) {
}
