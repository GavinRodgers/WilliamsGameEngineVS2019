#include "GameScene.h"
#include <memory>
#include "Background.h"

const float SPEED = -0.5f;

Background::Background()
{
	sprite_.setTexture(GAME.getTexture("Resources/ScrollingBackground.png"));
	sprite_.setPosition(sf::Vector2f(0, 0));
}

void Background::draw()
{
	GAME.getRenderWindow().draw(sprite_);
}

void Background::update(sf::Time& elapsed)
{
	int msElapsed = elapsed.asMilliseconds();
	sf::Vector2f pos = sprite_.getPosition();

	if (pos.x < -800)
	{
		sprite_.setPosition(sf::Vector2f(0, 0));
	}
	else
	{
		sprite_.setPosition(sf::Vector2f(pos.x + SPEED * msElapsed, pos.y));
	}
}