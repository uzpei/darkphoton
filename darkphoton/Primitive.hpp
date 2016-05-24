//
//  Primitive.hpp
//  darkphoton
//
//  Created by Emmanuel Piuze on 2016-05-23.
//  Copyright © 2016 uzpei. All rights reserved.
//

#ifndef Primitive_hpp
#define Primitive_hpp

#include <stdio.h>
#include "Ray.hpp"

class Primitive {
public:
    virtual bool intersect(Ray& ray, float &t) = 0;
};

#endif /* Primitive_hpp */
