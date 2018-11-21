#include "HelloWorldScene.h"

USING_NS_CC;

Scene* Game::CreateScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();
	auto layer = Game::create();

	scene->addChild(layer);

	return scene;
}

bool Game::init()
{
	if (!Layer::init())
	{
		return false;
	}

	sprite = SpaceShip::create("ship.png");
	sprite->setPosition(500,500);
	this->addChild(sprite, 0);

	this->scheduleUpdate();

	return true;
}

void Game::update(float deltaTime)
{
	sprite->update(deltaTime);
}