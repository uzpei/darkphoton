//
//  Vector3.hpp
//  darkphoton
//
//  Created by Emmanuel Piuze on 2016-05-23.
//  Copyright © 2016 uzpei. All rights reserved.
//

#ifndef Vector3_hpp
#define Vector3_hpp

#include <stdio.h>
#include <iostream>

class Vector3 {
public:
    Vector3(float x, float y, float z);
    Vector3();
    
    friend std::ostream & operator<<(std::ostream & str, Vector3 const & v);
    Vector3& operator+(Vector3& other);
    Vector3& operator-(Vector3& other);
    Vector3& operator*(float a);
    float operator*(Vector3& other);
    float x, y, z;
};

#endif /* Vector3_hpp */
