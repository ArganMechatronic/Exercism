#pragma once
#include <algorithm>
#include <string>
#include <array>

const int ALPHABET_SIZE = 26;
const int UPPER_ASCII_RANGE_START = 65;
const int LOWER_ASCII_RANGE_START = 97;

namespace pangram {

bool is_pangram(const std::string sentence);
int position_in_alphabet(const char letter);

}  // namespace pangram
