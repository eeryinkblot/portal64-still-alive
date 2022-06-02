#ifndef __COLLISION_SPHERE_H__
#define __COLLISION_SPHERE_H__

#include "collision.h"

extern struct ColliderCallbacks gCollisionSphereCallbacks;

struct CollisionSphere {
    float radius;
};

int collisionSphereCollideQuad(void* data, struct Transform* boxTransform, struct CollisionQuad* quad, struct ContactManifold* output);
float collisionSphereSolidMofI(struct ColliderTypeData* typeData, float mass);


#endif