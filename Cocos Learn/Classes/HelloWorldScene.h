#pragma once

#include "cocos2d.h"
#include "SpaceShip.h"
#include "Background.h"

class Game : public cocos2d::Scene
{
public:
	static cocos2d::Scene* CreateScene();
	virtual bool init() override;
	void update(float);


	CREATE_FUNC(Game);

private:
	cocos2d::Sprite *sprite;
	SpaceShip *ship;
	Background *map;
	cocos2d::Layer *worldMapLayer, *cameraLayer;
	cocos2d::Camera *camera;

};