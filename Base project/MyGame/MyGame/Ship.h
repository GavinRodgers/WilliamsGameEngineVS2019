#pragma once

#include "Engine/GameEngine.h"

class Ship : public GameObject
{
public:
	Ship(); // Creates object
	void draw();
	void update(sf::Time& elapsed);
private:
	sf::Sprite sprite_;
};

typedef std::shared_ptr<Ship> ShipPtr;