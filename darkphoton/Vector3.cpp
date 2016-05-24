//
//  Vector3.cpp
//  darkphoton
//
//  Created by Emmanuel Piuze on 2016-05-23.
//  Copyright © 2016 uzpei. All rights reserved.
//

#include "Vector3.hpp"

#include <iostream>

std::ostream& operator<<(std::ostream& str, Vector3 const& v) {
    str << "(" << v.x << "," << v.y << "," << v.z << ")";
    return str;
}

Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) { }

Vector3::Vector3() : x(0.0), y(0.0), z(0.0) { }

Vector3& Vector3::operator+(Vector3& other) {
    Vector3* v = new Vector3(x+other.x, y+other.y, z+other.z);
    return *v;
}

Vector3& Vector3::operator-(Vector3& other) {
    Vector3* v = new Vector3(x-other.x, y-other.y, z-other.z);
    return *v;
}

Vector3& Vector3::operator*(float a) {
    Vector3* v = new Vector3(a*x, a*y, a*z);
    return *v;
}

float Vector3::operator*(Vector3& other) {
    return x*other.x + y*other.y + z*other.z;
}
