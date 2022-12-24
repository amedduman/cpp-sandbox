#include "Entity.h"

Entity::Entity(float x, float y)
{
	X = x;
	Y = y;
}

void Entity::Move(float xa, float ya)
{
	X += xa;
	Y += ya;
}