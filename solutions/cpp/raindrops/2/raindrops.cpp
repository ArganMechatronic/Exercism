#include "raindrops.h"

namespace raindrops {

    std::string convert(const int number){
        std::string output_string{};
        if (is_divisible_by(number, 3)) output_string += "Pling";
        if (is_divisible_by(number, 5)) output_string += "Plang";
        if (is_divisible_by(number, 7)) output_string += "Plong";
        if (output_string.empty()) output_string += std::to_string(number);
        return output_string;
    }        
    
    bool is_divisible_by(const int dividend, const int divisor){
        return (dividend % divisor) == 0;
    }

}  // namespace raindrops
