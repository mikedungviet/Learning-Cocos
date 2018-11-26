#include "PhysicsComponent.h"
/*
 * @brief Constructor for the class. Set the world position to 0,0
 */
NoMovementPhysicsComponent::NoMovementPhysicsComponent()
{
	worldPosition = new Vector2();
}

/*
 * @brief Delete every dynamic allocated variables
 */
NoMovementPhysicsComponent::~NoMovementPhysicsComponent()
{
	delete worldPosition;
}

/*
 * @brief Gets the value for World Position. This vector then can be modified
 * @return Returns the worldPosition as a Vector2
 */
Vector2* NoMovementPhysicsComponent::GetWorldPosition()
{
	return worldPosition;
}

/*
 * @brief Gets the value for World Position. This vector then cannot be modified
 * @return Returns the worldPosition as a Vector2
 */
Vector2 NoMovementPhysicsComponent::GetWorldPosition() const
{
	return *worldPosition;
}


/*
 * @brief class constructor. Set everything to 0,0
 */
PhysicsComponent::PhysicsComponent()
{
	velocity = new Vector2();
	acceleration = new Vector2();
	force = new Vector2();
}

/*
 * @brief PhysicsComponent destructor. Delete any dynamic allocated variables
 */
PhysicsComponent::~PhysicsComponent()
{
	delete velocity;
	delete acceleration;
	delete force;
}

/*
 * @brief Get the velocity. Can be modified
 */
Vector2 PhysicsComponent::GetVelocity()
{
	return *velocity;
}

/*
 * @brief Get the velocity. Cannot be modified
 */
Vector2 PhysicsComponent::GetVelocity() const
{
	return *velocity;
}


