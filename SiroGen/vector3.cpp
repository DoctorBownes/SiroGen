#include "vector3.h"

Vector3::Vector3()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Vector3::Vector3(float x, float y)
{
	this->x = x;
	this->y = y;
	this->z = 0;
}

Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3::~Vector3()
{

}

Vector3* Vector3::add(Vector3 vector)
{
	this->x += vector.x;
	this->y += vector.y;
	this->z += vector.z;
	return this;
}

Vector3* Vector3::mult(float mult)
{
	this->x *= mult;
	this->y *= mult;
	this->z *= mult;
	return this;
}

void Vector3::MoveTowards(Vector3 vector, float speed)
{
	Vector3* thisvector = new Vector3(vector.x, vector.y);
	Vector3* dir = thisvector->sub(*this);

	//normalize
	dir->x = dir->x / std::sqrt((dir->x * dir->x) + (dir->y * dir->y) + (dir->z * dir->z));
	dir->y = dir->y / std::sqrt((dir->x * dir->x) + (dir->y * dir->y) + (dir->z * dir->z));
	dir->z = dir->z / std::sqrt((dir->x * dir->x) + (dir->y * dir->y) + (dir->z * dir->z));

	dir->mult(speed);
	this->add(*dir);
	delete thisvector;
}

Vector3* Vector3::sub(Vector3 vector)
{
	this->x -= vector.x;
	this->y -= vector.y;
	this->z -= vector.z;
	return this;
}
