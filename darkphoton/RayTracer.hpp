//
//  RayTracer.hpp
//  darkphoton
//
//  Created by Emmanuel Piuze on 2016-05-23.
//  Copyright © 2016 uzpei. All rights reserved.
//

#ifndef RayTracer_hpp
#define RayTracer_hpp

#include <stdio.h>
#include <vector>

#include "Image.hpp"
#include "Primitive.hpp"

class RayTracer {
    
public:
    RayTracer(int height, int width, float d, float fov);

    void add(Primitive* primitive);
    void trace();
    
private:
    Image<float>* m_canvas;
    float m_d;
    float m_fov;
    std::vector<Primitive*> m_primitives;

};

#endif /* RayTracer_hpp */
