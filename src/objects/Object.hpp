#pragma once

class Object {
public:
	virtual bool intersect(const Ray &ray) = 0;
}