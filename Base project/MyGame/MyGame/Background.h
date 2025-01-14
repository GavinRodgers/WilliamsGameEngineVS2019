#pragma once

#include "Engine/GameEngine.h"

class Background : public GameObject {
public:

	Background();
	void draw();
	void update(sf::Time& elapsed);
private:
	sf::Sprite sprite_;
};

typedef std::shared_ptr<Background> BackgroundPtr;
