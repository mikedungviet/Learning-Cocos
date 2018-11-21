#pragma once
#include "cocos2d.h"


class SpaceShip: public cocos2d::Sprite
{
public:
	virtual ~SpaceShip();

	static SpaceShip* create(const std::string &aFilename);

	CC_SYNTHESIZE(cocos2d::Vec2, m_velocity, Velocity);


	//CREATE_FUNC(SpaceShip);

	 void onEnter() override;
	 void onExit() override;
	 void update(float deltaTime) override;
protected:
	SpaceShip();

	bool init(const std::string& aFilename);
};

