#include "objects/Sphere.hpp"
#include "Vector.hpp"
#include "Ray.hpp"
#include "pigeon_test.hpp"

TEST_SETUP();

int main(int argc, char *argv[]) {
	Vector orig(0,0,0);
	double radius = 1;

	Ray ray1(Vector(-2, 1, 0), Vector(1,0,0));
	Ray ray2(Vector(-2, 1, 0), Vector(-1,0,0));
	Ray ray3(Vector(0, 0.5f, 0), Vector(1,0,0));
	Sphere sphere(orig, radius);

	ASSERT(sphere.intersect(ray1), true, "No intersection");

	ASSERT(sphere.intersect(ray2), false, "Error in intersection");

	ASSERT(sphere.intersect(ray3), false, "Origin is inside the Sphere");

	REPORT();
	return ERROR_COUNT;
}
