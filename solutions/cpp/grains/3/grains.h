#pragma once
#include <stdexcept> 

namespace grains {
    
    inline auto square(const unsigned int square_number){ return 1ULL << (square_number - 1);}
    constexpr auto total() {return 0b1111111111111111111111111111111111111111111111111111111111111111ULL;}

}  // namespace grains
