#pragma once
#include "cocos2d.h"
#include "Vector2.h"
#include "PhysicsComponent.h"


class SpaceShip: public cocos2d::Sprite
{
public:
	virtual ~SpaceShip();

	static SpaceShip* Create(const std::string &aFilename);

	//Member Functions
	 void update(const float deltaTime) override;
protected:
	SpaceShip();
private:
	void CheckOutOfScreenPosition();
	PhysicsComponent *physicsComponent;
};

