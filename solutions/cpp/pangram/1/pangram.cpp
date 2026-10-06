#include "pangram.h"

namespace pangram {
    
bool is_pangram(const std::string sentence){
    std::array<bool, ALPHABET_SIZE + 1> alphabet_grid{false};
    for (char c : sentence){
        int position = position_in_alphabet(c);
        if (position != 0) alphabet_grid[position] = true;
    }
    return std::all_of(alphabet_grid.begin() + 1, alphabet_grid.end(), [](bool v) { return v; });
}

int position_in_alphabet(const char letter){
    if( letter >= 'a' && letter <= 'z'){
        return letter - (LOWER_ASCII_RANGE_START -1);
        }
    if(letter >= 'A' && letter <= 'Z'){
        return letter - (UPPER_ASCII_RANGE_START -1);  

    }
    return 0;
}
    
}  // namespace pangram
