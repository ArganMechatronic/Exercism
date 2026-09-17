#include "reverse_string.h"
#include <iostream>

namespace reverse_string {
    
std::string reverse_string(const std::string string_to_reverse){
    std::string reversed_string;
    if (!string_to_reverse.empty()){
        for (size_t i = string_to_reverse.length() ; i > 0  ; i--){
            reversed_string.push_back(string_to_reverse[i-1]);
        }
    }
    return reversed_string;
}    
}  // namespace reverse_string
