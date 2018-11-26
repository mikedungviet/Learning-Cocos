#include "HelloWorldScene.h"
#include "Particle3D/PU/CCPUParticleFollowerTranslator.h"

USING_NS_CC;

Scene* Game::CreateScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();
	const auto game = Game::create();

	scene->addChild(game);

	return scene;
}

bool Game::init()
{
	if (!Scene::init())
	{
		return false;
	}

	//Set up for the background layers which is 10,000 x 10,000 pixels
	worldMapLayer = Layer::create();
	//this->addChild(worldMapLayer,0);
	map = Background::Create("TestingBackground.png");
	map->setPosition(0, 0);
	worldMapLayer->addChild(map);

	//Set up for the showing on screen layers which is 1920x1080
	cameraLayer = Layer::create();
	cameraLayer->setPosition(500, 0); //This is MOVING THE LAYER!!! set so that I moves the background
	this->addChild(cameraLayer,1);
	ship = SpaceShip::Create("ship.png");
	ship->setPosition(200, 200);
	cameraLayer->addChild(ship);

	

	this->scheduleUpdate();

	return true;
}

void Game::update(float deltaTime)
{
	//ship->update(deltaTime);
	
}