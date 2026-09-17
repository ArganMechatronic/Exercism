#pragma once
#include <stdexcept>

namespace triangle {

     enum class flavor{
        equilateral,
        isosceles,
        scalene
     };

    flavor kind(const double a,const  double b,const double c);
    bool is_a_triangle(const double a,const  double b,const double c);

}  // namespace triangle
