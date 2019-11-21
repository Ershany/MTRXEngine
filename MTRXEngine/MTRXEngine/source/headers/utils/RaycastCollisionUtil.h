#pragma once

#include <utils/PhysicsUtil.h>
#include <colliders/Collider.h>
#include <math/Ray.h>

namespace mtrx
{
	namespace RaycastCollisionUtil
	{
		bool RaySphereCollision(const glm::vec3& sphereCenter, float sphereRadius, const glm::vec3& startPointRay, const glm::vec3& rayDirection);
		bool RayCapsuleCollision(const glm::vec3& startPositionRay, const glm::vec3& direction, const glm::vec3& A, const glm::vec3& B, float capsRadius);
		bool RayBoxCollision(const glm::vec3& rayStart, const glm::vec3& rayDirection, const glm::vec3& center, const glm::vec3* axes, const float* halfExtents);

		Collider* RaycastFiltered(const std::map<int, Collider*>& colliders, const std::vector<Collider*>& filterColliders, const glm::vec3& rayStartPosition, const glm::vec3& rayDirection);	// Raycast check on colliders filtered
		Collider* RaycastUnfiltered(const std::map<int, Collider*>& colliders, const glm::vec3& rayStartPosition, const glm::vec3& rayDirection);	// Raycast check for all colliders
	}
}