#include "leap.h"

namespace leap {

bool is_multiple_of(const int integer, const int divider){
    return (integer % divider) == 0;
}
    
bool is_leap_year(const int year){
    //If mult. of 100 is true, evaluate mult. of 400. If mult. of 100 is false, evaluate mult. of 4
    return is_multiple_of(year, 100) ? is_multiple_of(year, 400) : is_multiple_of(year, 4);
}
    
}  // namespace leap
