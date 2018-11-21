#include "SpaceShip.h"

using namespace cocos2d;

SpaceShip::SpaceShip(): m_velocity(0,0){/*empty*/}

SpaceShip::~SpaceShip(){/*empty*/}

SpaceShip* SpaceShip::create(const std::string& aFilename)
{
	auto instance = new SpaceShip();
	if (instance && instance->init(aFilename))
	{
		instance->autorelease();
		return instance;
	}

	CC_SAFE_DELETE(instance);
	return nullptr;
}

bool SpaceShip::init(const std::string& aFilename)
{
	return Sprite::initWithFile(aFilename);
}

void SpaceShip::onEnter()
{
	Sprite::onEnter();
	scheduleUpdate();
}

void SpaceShip::onExit()
{
	Sprite::onExit();
	unscheduleUpdate();
}

void SpaceShip::update(float deltaTime)
{
	auto position = this->getPosition();
	position.x += 250 * deltaTime;
	this->setPosition(position);
}



