#pragma once

#include "Ray.hpp"

class Object {
public:
	virtual bool intersect(const Ray &ray) = 0;
};
