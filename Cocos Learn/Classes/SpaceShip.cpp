#include "SpaceShip.h"
using namespace cocos2d;

/*
 * @brief Constructor for Spaceship class. Set variables to its default.
 */
SpaceShip::SpaceShip()
{
	//Need to clean up in the destructor
	physicsComponent = new PhysicsComponent();
}

/*
 * @brief Destructor for SpaceShip class. Delete any dynamic allocated variable.
 */
SpaceShip::~SpaceShip()
{
	delete physicsComponent;
}

/*
 * @brief This function create a SpaceShip object and initiate with
 * an image file
 *
 * @param &aFilename The image name to be initiated with
 */
SpaceShip* SpaceShip::Create(const std::string& aFilename)
{
	auto instance = new SpaceShip();
	if (instance && instance->Sprite::initWithFile(aFilename))
	{
		instance->autorelease();
		return instance;
	}
	CC_SAFE_DELETE(instance);
	return nullptr;
}

/*
 * @brief This function updates the current state of the space ship
 *
 * @param deltaTime This is the time changes from last frame to current frame
 */
void SpaceShip::update(const float deltaTime)
{
	physicsComponent->GetWorldPosition()->SetWithCocosVector(this->getPosition());
	physicsComponent->GetWorldPosition()->y += 250 * deltaTime;
	CheckOutOfScreenPosition();
	this->setPosition(physicsComponent->GetWorldPosition()->x, physicsComponent->GetWorldPosition()->y);
}

/*
 * @brief This functions checks if the object position of the spaceship is outside of the screen
 * and if it does, change the position to the opposite side of the screen
 */
void SpaceShip::CheckOutOfScreenPosition()
{	

}




