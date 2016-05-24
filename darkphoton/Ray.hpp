//
//  Ray.hpp
//  darkphoton
//
//  Created by Emmanuel Piuze on 2016-05-23.
//  Copyright © 2016 uzpei. All rights reserved.
//

#ifndef Ray_hpp
#define Ray_hpp

#include <stdio.h>
#include "Vector3.hpp"

class Ray {
    
public:
    Ray(Vector3& origin, Vector3& direction);

    inline Vector3 origin() { return m_origin; }
    inline Vector3 direction() { return m_direction; }
    
private:
    Vector3& m_origin;
    Vector3& m_direction;
};

#endif /* Ray_hpp */
