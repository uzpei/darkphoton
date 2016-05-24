//
//  Image.hpp
//  darkphoton
//
//  Created by Emmanuel Piuze on 2016-05-23.
//  Copyright © 2016 uzpei. All rights reserved.
//

#ifndef Image_hpp
#define Image_hpp

#include <stdio.h>
#include <algorithm>

template <typename T>
class Image {
    
public:
    Image<T>();

    //    Image<T> add(Image<T> a, Image<T> b);
    Image(int width, int height) : m_width(width), m_height(height), m_stride(width) {
        // Initialize empty image of size width x height x sizeof(T)
        int n = width * height;
        m_data = new T[n];
        
        for (int i = 0; i < n; ++i)
            m_data[i] = 0;
    }

    ~Image() {
        delete[] m_data;
    }

    T at(int x, int y);
    inline void set(int x, int y, T v) {
        m_data[y*m_stride + x] = v;
    }
    
    inline int width() { return m_width; }
    inline int height() { return m_height; }

private:
    int m_width, m_height, m_stride;
    T* m_data;
};

template<typename T>
Image<T>::Image() {
    // empty constructor
}

template<typename T>
T Image<T>::at(int x, int y) {
    return m_data[y * m_stride + x];
}


typedef class Image<float> Image32F;
typedef class Image<unsigned int> Image32I;

#endif /* Image_hpp */
