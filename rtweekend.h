#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <memory>

// C++ std usings

using std::make_shared;
using std::shared_ptr;

//constants
const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

//utility function
inline double  degree_to_radians(double degrees) {
    return degrees * pi / 180.0;
};

inline double random_double() {
    //return a real number between [0,1)
    return std::rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
    //returns a random real in [min, max)
    return min + (max - min) * random_double();
}

//common headers
#include "interval.h"
#include "color.h"
#include "ray.h"
#include "vec3.h"

#endif