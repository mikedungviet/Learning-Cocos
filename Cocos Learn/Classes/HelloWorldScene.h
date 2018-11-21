#pragma once

#include "cocos2d.h"
#include "SpaceShip.h"

class Game : public cocos2d::Layer
{
public:
	static cocos2d::Scene* CreateScene();
	virtual bool init() override;
	void update(float);


	CREATE_FUNC(Game);

private:
	SpaceShip *sprite;
};