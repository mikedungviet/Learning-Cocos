#pragma once
#include "Vector2.h"

class NoMovementPhysicsComponent
{
protected:
	Vector2 *worldPosition;
public:
	//Constructors and Destructor
	NoMovementPhysicsComponent();
	~NoMovementPhysicsComponent();

	//Getters
	Vector2 GetWorldPosition() const;
	Vector2* GetWorldPosition(); //Able to modify
};

class PhysicsComponent: public NoMovementPhysicsComponent
{
private:
	Vector2 *velocity, *acceleration, *force;
public:
	//Constructors and Destructor
	PhysicsComponent();
	~PhysicsComponent();

	//Getters
	Vector2 GetVelocity();
	Vector2 GetVelocity() const;
	Vector2 GetAcceleration();
	Vector2 GetAcceleration()const;
	Vector2 GetForce();
	Vector2 GetForce()const;
};


