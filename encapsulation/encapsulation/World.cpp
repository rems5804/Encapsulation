#include "World.h"
#include <iostream>
#include <cmath>

World::~World() {
	for (Entity* entity : entities) {
		delete entity;
	}
	entities.clear();

}

void World::Init() {
	entities.push_back(new StaticObject)
}