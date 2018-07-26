/*
	Author: Mohamed Kazma
	Description: A general implementation of a collider
	PS: Calls for collision detection should be done b4 calling the updating functions
*/

#pragma once
#ifndef COLLIDER_H
#define COLLIDER_H

#include <iostream>
#include <vector>
#include <glm/glm.hpp>
#include <glm/vec3.hpp>

#include "Rigidbody.h"
#include "Defs.h"

class Collider
{
public:
	ColliderType type;														// Collider type
	bool enabled;															// For deciding whether to do a collision detection check
	bool trigger;															// Is it a trigger collider?
	bool stillColliding;													// Still in collision
	bool enteredCollision;													// Entered collision
	bool exitedCollision;													// Exited collision	
	bool isConvexShape;														// Is the collider a convex shape
	glm::vec3 center;														// The center position of the collider
	glm::vec3 forwardDirection;												// The forward direction of the collider
	glm::vec3 upDirection;													// The Upwards direction of the collider
	glm::vec3 sideDirection;												// The Side direction of the collider
	Rigidbody* physicalValues;												// Values that might be needed are here
	std::vector<glm::vec3*> vertices;										// Store the vertices of the collider

	Collider(const glm::vec3& vec = glm::vec3());							// Constructor
	~Collider();															// Destructor

	virtual void Update(const glm::vec3&) = 0;								// Update the values of the collider
	virtual void UpdateCollisionInfo();										// Updates info on entering exiting staying in collision etc...
	// MIGHT NEED TO ADD A REFERENCE TO A REBOUND VECTOR THAT MIGHT HELP IN THE RESPONSE
	virtual bool CheckCollision(Collider&) = 0;								// Checks for a collision (there will be multiple ones of these for each of the colliders)
	virtual bool CollisionEnter();											// When the collider enters collision
	virtual bool CollisionStay();											// When the collider stays in collision
	virtual bool CollisionExit();											// When the collider exits collision

	friend std::ostream& operator<<(std::ostream& , const Collider&);		// Print values of the collider
	friend std::ostream& operator<<(std::ostream&, const glm::vec3&);		// Print values of the vec3

private:
protected:
	bool isColliding;														// For checking if the collider is colliding with another collider
};
#endif // COLLIDER_H