#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    return std::vector<int>(student_scores.begin(), student_scores.end());
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int number_of_fails{0};
    for (const int& score : student_scores){
        if (score < 40 || score == 40){
            number_of_fails++;
        }
    }    
    return number_of_fails;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    const int number_of_grades = 5;
    int failing_score = 40; //points
    int grades_gap = (highest_score - failing_score)/(number_of_grades -1); //points
    std::array<int, number_of_grades -1> results{0};
    for (int i = 0; i < results.size(); i++) {
        results[i] = failing_score + i * grades_gap + 1;
    }
    return results;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> ranking;
    for (int i = 0; i < student_names.size(); i++){
        ranking.push_back(std::to_string(i + 1) + ". " + student_names[i] + ": " +  std::to_string(student_scores[i]));
    }
    return ranking;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    for (int i = 0; i < student_names.size(); i++){
        if (student_scores[i] == 100){
            return student_names[i];
        }
    }
    return "";
}
