#include "objects/Sphere.hpp"
#include "Vector.hpp"
#include "Ray.hpp"
#include "pigeon_test.hpp"

TEST_SETUP();

int main(int argc, char *argv[]) {
	Vector orig(0,0,0);
	double radius = 1;

	Ray ray(Vector(-2, 1, 0), Vector(1,0,0));
	Sphere sphere(orig, radius);

	ASSERT(sphere.intersect(ray), true, "No intersection");

	REPORT();
	return ERROR_COUNT;
}
