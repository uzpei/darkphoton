//
//  Sphere.hpp
//  darkphoton
//
//  Created by Emmanuel Piuze on 2016-05-23.
//  Copyright © 2016 uzpei. All rights reserved.
//

#ifndef Sphere_hpp
#define Sphere_hpp

#include <stdio.h>
#include "Primitive.hpp"
#include "Vector3.hpp"

class Sphere : public Primitive {
public:
    Sphere(Vector3& center, float radius);
    
    bool intersect(Ray& ray, float &t);
    
private:
    Vector3& m_center;
    float m_radius;
};

#endif /* Sphere_hpp */
