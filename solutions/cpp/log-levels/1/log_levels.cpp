#include <string>

namespace log_line {
std::string message(std::string line) {
    int offsetMessage = 2;
    int endOfHeader = line.find(":");
    return (line.substr(endOfHeader + offsetMessage));
}

std::string log_level(std::string line) {
    int startOfLogLevel = 1;
    int offsetBracketLogLevel = 2;
    int endOfHeader = line.find(":");
    return line.substr(startOfLogLevel,endOfHeader - offsetBracketLogLevel);
}

std::string reformat(std::string line) {
    std::string reformatedMessage{ message(line) + " (" + log_level(line) + ")" };
    return reformatedMessage;
}
}  // namespace log_line
