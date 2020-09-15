#include "Ping.h"
#include "Texture.h"
#include "Font.h"
#include "Input.h"
#include "glm\ext.hpp"
#include <Gizmos.h>

Ping::Ping()
{

}

Ping::~Ping()
{

}

bool Ping::startup()
{
	//Initialize the Gizmos
	aie::Gizmos::create(255U, 255U, 65535U, 65535U);

	return true;
}

bool Ping::shutdown()
{
	return false;
}

void Ping::update(float deltaTime)
{
}

void Ping::draw()
{
}
