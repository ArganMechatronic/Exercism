#include "triangle.h"


namespace triangle {

    flavor kind(const double a, const double b, const double c){
        if (!is_a_triangle(a,b,c)) throw std::domain_error("Not a triangle");
        if (a == b && a == c) return flavor::equilateral;
        if (a == b || a == c || b == c) return flavor::isosceles;
        return flavor::scalene;
    }

    bool is_a_triangle(const double a,const  double b,const double c){
        bool all_sides_positives = a > 0 && b > 0 && c > 0;
        bool two_sides_greater_than_third = (a+b) > c && (a+c)>b && (b+c)>a;
        return all_sides_positives && two_sides_greater_than_third;
    }

}  // namespace triangle
