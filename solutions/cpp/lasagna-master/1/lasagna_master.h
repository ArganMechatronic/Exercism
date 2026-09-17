#pragma once
#include <stdlib.h>
#include <vector>
#include <string>
#include <algorithm> 

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

int preparationTime(const std::vector<std::string> layers, const int avgPrepTimePerLayer = 2);
amount quantities(const std::vector<std::string> layers);
void addSecretIngredient(std::vector<std::string> &myIngredients, const std::vector<std::string> &FriendIngredients);
void addSecretIngredient(std::vector<std::string> &myIngredients, const std::string auntieIngredient);
std::vector<double> scaleRecipe(const std::vector<double> amountForTwoPortions, const int numberOfPortionToCook);

}  // namespace lasagna_master
