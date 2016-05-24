//
//  RayTracer.cpp
//  darkphoton
//
//  Created by Emmanuel Piuze on 2016-05-23.
//  Copyright © 2016 uzpei. All rights reserved.
//

#include <iostream>

#include "RayTracer.hpp"
#include "Vector3.hpp"
#include "Ray.hpp"

using namespace std;

RayTracer::RayTracer(int height, int width, float d, float fov) : m_d(d), m_fov(fov) {
    m_canvas = new Image<float>(width, height);
}

void RayTracer::add(Primitive* primitive) {
    m_primitives.push_back(primitive);
}


void RayTracer::trace() {
    float h = m_canvas->width();
    float w = m_canvas->height();
    
    float w2 = w / 2.0;
    float h2 = h / 2.0;
    
    Vector3 p;
    Vector3 eye(0,0,0);
    float t = 0;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            // Flush accumulator
            m_canvas->set(j, i, 0);
            
            // Convert to device coordinates
            p.x = (j - w2) / w2;
            p.y = (i - h2) / h2;
            p.z = m_d;
            
            // Compute ray
            Ray ray(eye, p-eye);
            
            cout <<  i << "," << j << ":" << p << endl;
            
            // Trace primitives
            for (vector<Primitive*>::iterator it = m_primitives.begin(); it != m_primitives.end(); ++it) {
                Primitive* primitive = *it;
                
                if (primitive->intersect(ray, t)) {
                    // TODO: accumulate from BRDF at point
                    cout << "Intersection found at " << t << endl;
                }
            }
        }
    }
    
}