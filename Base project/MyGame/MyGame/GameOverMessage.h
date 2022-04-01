#pragma once
#include "Engine/GameEngine.h"

class GameOverMessage : public GameObject
{
public:
	GameOverMessage(int score);
	void draw();
	void update(sf::Time& elasped);
private:
	sf::Text text_;
};

typedef std::shared_ptr<GameOverMessage> GameOverMessagePtr;