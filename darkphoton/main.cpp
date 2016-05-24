//
//  main.cpp
//  darkphoton
//
//  Created by Emmanuel Piuze on 2016-05-23.
//  Copyright © 2016 uzpei. All rights reserved.
//

#include <iostream>

#include "Image.hpp"
#include "RayTracer.hpp"
#include "Sphere.hpp"
#include "Vector3.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    RayTracer tracer(64, 128, -1, 70);
    Vector3 origin;
    Sphere* sphere = new Sphere(origin, 1);
    tracer.add(sphere);
    tracer.trace();
    
    delete sphere;
    
    return 0;
}
