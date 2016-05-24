//
//  Sphere.cpp
//  darkphoton
//
//  Created by Emmanuel Piuze on 2016-05-23.
//  Copyright © 2016 uzpei. All rights reserved.
//

#include <math.h>
#include <iostream>

#include "Sphere.hpp"
#include "Vector3.hpp"

Sphere::Sphere(Vector3& center, float radius) : m_center(center), m_radius(radius) { }

bool Sphere::intersect(Ray& ray, float &t) {
    Vector3 e = ray.origin();
    Vector3 v = ray.direction();
    Vector3 ec = m_center - e;
    
    float a = v*v;
    float b = v*ec;
    float c = a * (ec*ec - m_radius*m_radius);
    
    float in_sqrt = b*b - 4*a*c;
    
    if (in_sqrt < 0) {
        t = 0;
        return false;
    }
    
    float out_sqrt = sqrt(in_sqrt);
    float tt1 = -b + out_sqrt;
    float tt2 = -b - out_sqrt;
    
//    cout << "a=" << a << endl;
    
    if (tt1 >= 0)
        t = tt1 / (2*a);
    else
        t = tt2 / (2*a);
    
    return true;
}
